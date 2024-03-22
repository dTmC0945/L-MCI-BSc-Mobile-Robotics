#!/bin/bash

# First check your Ubuntu Version
# For maximum compatability with ROS it needs to be 22.04 LTS

# Creating log for troubleshooting
echo "###### BEGIN ATTEMPT #######" >>install_log.txt

echo "Welcome to ROS 2 Automated Installation"
echo ""
echo ""

# Accessing the Ubuntu version using AWK and piping it to grep for Regex
version=$(awk "/VERSION_ID/" IGNORECASE=1 /etc/*release |
  grep -Eo "[[:digit:]]+([.][[:digit:]]+)?")

# Checks version for ROS Compliance
if [[ "${version}" == *"22.04"* ]]; then
  echo "Version is supported."
  sleep 1
  echo "Continuing installation..."
  sleep 1
else
  echo "Your version: "$version", What is needed: 22.04"
  echo "I am sorry but your version is not supported."
  echo "This install script will terminate"
  exit

fi

echo ""
echo "Installing UTF-8 Compliance ..."

{
  locale # check for UTF-8

  sudo apt update
  sudo apt install locales
  sudo locale-gen en_US en_US.UTF-8
  sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
  export LANG=en_US.UTF-8

  locale # verify settings
} &>>install_log.txt

echo ""
echo "Enabling Ubuntu Universe Repositories..."

{
  sudo apt install software-properties-common
  echo | sudo add-apt-repository universe
} &>>install_log.txt

echo ""
echo "Adding ROS 2 GPG Keys ..."

{
  sudo apt update
  sudo apt install curl -y
  sudo curl -sSL \
    https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
    -o /usr/share/keyrings/ros-archive-keyring.gpg
} &>>install_log.txt

echo ""
echo "Adding ROS 2 to repository ..."

{
  echo "deb [arch=$(dpkg --print-architecture) \
  signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] \
  http://packages.ros.org/ros2/ubuntu \
  $(. /etc/os-release && echo $UBUNTU_CODENAME) main" \
  | sudo tee /etc/apt/sources.list.d/ros2.list >/dev/null
} &>>install_log.txt

echo ""
echo "Getting Updates ..."

{
  sudo apt update
  echo yes | sudo apt upgrade
} &>>install_log.txt

echo ""
echo "Installing ROS ..."

{
  echo yes | sudo apt install ros-humble-desktop
  yes | sudo apt install ros-dev-tools
} &>>install_log.txt

{
  sudo apt install dbus-x11
} &>>install_log.txt

echo ""
echo "Sourcing ROS file ..."
sleep 1

echo "source /opt/ros/humble/setup.bash" >>~/.bashrc

echo ""
echo "Removing unnecessary files ..."
sleep 1
{
  yes | sudo apt autoremove
} &>>install_log.txt
