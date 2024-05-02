# Install script for directory: /home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/clem/LMN3_fork/LMN-3-DAW/build/tracktion_engine/modules/juce/tools/modules/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/clem/LMN3_fork/LMN-3-DAW/build/tracktion_engine/modules/juce/tools/extras/Build/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JUCE-6.1.6" TYPE FILE FILES
    "/home/clem/LMN3_fork/LMN-3-DAW/build/tracktion_engine/modules/juce/tools/JUCEConfigVersion.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/build/tracktion_engine/modules/juce/tools/JUCEConfig.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/JUCECheckAtomic.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/JUCEHelperTargets.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/JUCEModuleSupport.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/JUCEUtils.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/LaunchScreen.storyboard"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/PIPAudioProcessor.cpp.in"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/PIPComponent.cpp.in"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/PIPConsole.cpp.in"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/RecentFilesMenuTemplate.nib"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/UnityPluginGUIScript.cs.in"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/checkBundleSigning.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/copyDir.cmake"
    "/home/clem/LMN3_fork/LMN-3-DAW/tracktion_engine/modules/juce/extras/Build/CMake/juce_runtime_arch_detection.cpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/clem/LMN3_fork/LMN-3-DAW/build/tracktion_engine/modules/juce/tools/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
