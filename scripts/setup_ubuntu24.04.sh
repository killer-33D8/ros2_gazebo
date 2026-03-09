#!/bin/bash
# One-time setup for Ubuntu 24.04 to run this ROS2-Gazebo-GO2 (Unitree GO2 sim) project.
# Installs: ROS2 Jazzy, Gazebo, Navigation2, tf_transformations, CycloneDDS, etc., then colcon build.
#
# Usage (from repo root):
#   bash scripts/setup_ubuntu24.04.sh
#
# Blank Ubuntu 24.04 (clone then run):
#   git clone https://github.com/killer-33D8/ros2_gazebo.git && cd ros2_gazebo && bash scripts/setup_ubuntu24.04.sh
set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

info() { echo -e "${GREEN}[INFO]${NC} $1"; }
warn() { echo -e "${YELLOW}[WARN]${NC} $1"; }
err()  { echo -e "${RED}[ERR]${NC} $1"; }

# --- Check Ubuntu version ---
if [ -f /etc/os-release ]; then
  . /etc/os-release
  if [ "$VERSION_ID" != "24.04" ]; then
    warn "This script targets Ubuntu 24.04 (Noble). You have $VERSION_ID. It may still work."
  fi
else
  err "Cannot detect OS. Aborting."
  exit 1
fi

# --- Repo root: script dir's parent when run as ./scripts/setup_ubuntu24.04.sh, else $PWD ---
if [ -n "${BASH_SOURCE[0]}" ] && [ -f "${BASH_SOURCE[0]}" ]; then
  REPO_ROOT="$(cd -P "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
else
  REPO_ROOT="${REPO_ROOT:-$(pwd)}"
fi
if [ ! -f "$REPO_ROOT/src/gazebo_sim/package.xml" ]; then
  err "Repo root not found (no src/gazebo_sim/package.xml). Clone the repo and run from repo root: bash scripts/setup_ubuntu24.04.sh"
  exit 1
fi
cd "$REPO_ROOT"
info "Using repo root: $REPO_ROOT"

# --- 1. Locale ---
info "Setting locale..."
sudo apt update -qq
sudo apt install -y locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

# --- 2. Enable repos ---
info "Enabling repositories..."
sudo apt install -y software-properties-common curl
sudo add-apt-repository -y universe

# --- 3. Add ROS 2 Jazzy apt source ---
if ! dpkg -l ros2-apt-source &>/dev/null; then
  info "Adding ROS 2 Jazzy apt source..."
  ROS_APT_VER=$(curl -sSf "https://api.github.com/repos/ros-infrastructure/ros-apt-source/releases/latest" | sed -n 's/.*"tag_name": *"\([^"]*\)".*/\1/p')
  CODENAME="${UBUNTU_CODENAME:-noble}"
  curl -sSL -o /tmp/ros2-apt-source.deb \
    "https://github.com/ros-infrastructure/ros-apt-source/releases/download/${ROS_APT_VER}/ros2-apt-source_${ROS_APT_VER}.${CODENAME}_all.deb"
  sudo dpkg -i /tmp/ros2-apt-source.deb
  rm -f /tmp/ros2-apt-source.deb
else
  info "ROS 2 apt source already present."
fi

# --- 4. Install ROS 2 Jazzy ---
sudo apt update -qq
if ! dpkg -l ros-jazzy-desktop &>/dev/null; then
  info "Installing ROS 2 Jazzy desktop (this may take a while)..."
  sudo apt install -y ros-jazzy-desktop
else
  info "ros-jazzy-desktop already installed."
fi

if ! command -v colcon &>/dev/null; then
  info "Installing ros-dev-tools (colcon, etc.)..."
  sudo apt install -y ros-dev-tools
fi

# --- 5. Project-specific ROS packages ---
info "Installing project dependencies..."
sudo apt install -y \
  ros-jazzy-navigation2 \
  ros-jazzy-nav2-bringup \
  ros-jazzy-tf-transformations \
  ros-jazzy-teleop-twist-keyboard \
  ros-jazzy-robot-localization \
  ros-jazzy-rmw-cyclonedds-cpp \
  ros-jazzy-ros-gz-bridge \
  ros-jazzy-ros-gz-image \
  ros-jazzy-gz-ros2-control \
  ros-jazzy-ros2-controllers \
  ros-jazzy-slam-toolbox \
  ros-jazzy-camera-info-manager \
  ros-jazzy-rqt-robot-steering

# Optional: opennav_docking may not be in all distros
sudo apt install -y ros-jazzy-opennav-docking 2>/dev/null || warn "ros-jazzy-opennav-docking not found (optional)."

# --- 6. Source ROS and build workspace ---
info "Building workspace..."
source /opt/ros/jazzy/setup.bash
cd "$REPO_ROOT"
colcon build

# --- 7. Optional: add to shell rc ---
SETUP_RC="
# ROS2 Jazzy + ros2_gazebo workspace (added by setup_ubuntu24.04.sh)
source /opt/ros/jazzy/setup.bash
if [ -f \"$REPO_ROOT/install/setup.bash\" ]; then
  source \"$REPO_ROOT/install/setup.bash\"
fi
export CYCLONEDDS_URI=file://$REPO_ROOT/src/docker/cyclonedds.xml
"
if ! grep -q "install/setup.bash" ~/.bashrc 2>/dev/null; then
  info "Adding workspace source and CYCLONEDDS_URI to ~/.bashrc"
  echo "$SETUP_RC" >> ~/.bashrc
else
  info "~/.bashrc already has workspace setup (skip)."
fi

info "Setup complete."
echo ""
echo "Next steps:"
echo "  1. Open a new terminal (or run: source $REPO_ROOT/install/setup.bash)"
echo "  2. export CYCLONEDDS_URI=file://$REPO_ROOT/src/docker/cyclonedds.xml"
echo "  3. ros2 launch gazebo_sim launch.py sensors:=true world:=warehouse.sdf"
echo "  4. In another terminal: ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/robot1/cmd_vel"
echo ""
