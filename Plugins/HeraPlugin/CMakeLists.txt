cmake_minimum_required(VERSION 3.16)

project(Hera VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(HERA_DESIGNER "Display the user interface design panel" OFF)
option(HERA_FORCE_DEBUG "Enable debug mode regardless of build configuration" OFF)

juce_add_plugin(Hera
    # VERSION ...                               # Set this if the plugin version is different to the project version
    # ICON_BIG ...                              # ICON_* arguments specify a path to an image file to use as an icon for the Standalone
    # ICON_SMALL ...
    COMPANY_NAME "A/C Electronics"                          # Specify the name of the plugin's author
    IS_SYNTH TRUE                               # Is this a synth or an effect?
    NEEDS_MIDI_INPUT TRUE                       # Does the plugin need midi input?
    NEEDS_MIDI_OUTPUT TRUE                     # Does the plugin need midi output?
    # IS_MIDI_EFFECT TRUE/FALSE                 # Is this plugin a MIDI effect?
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE           # Does the editor need keyboard focus?
    COPY_PLUGIN_AFTER_BUILD TRUE                # Should the plugin be installed to a default location after building?
    PLUGIN_MANUFACTURER_CODE AcEl               # A four-character manufacturer id with at least one upper-case character
    PLUGIN_CODE Hera                            # A unique four-character plugin id with at least one upper-case character
    FORMATS VST3                                # The formats to build. Other valid formats are: AAX Unity VST AU AUv3
    VST3_CATEGORIES Synth
    PRODUCT_NAME "Hera")           # The name of the final executable, which can differ from the target name

target_sources(Hera PRIVATE
    PluginEditor.cpp
    PluginProcessor.cpp)

target_compile_definitions(Hera
    PUBLIC
    # JUCE_WEB_BROWSER and JUCE_USE_CURL would be on by default, but you might not need them.
    JUCE_WEB_BROWSER=0  # If you remove this, add `NEEDS_WEB_BROWSER TRUE` to the `juce_add_plugin` call
    JUCE_USE_CURL=0     # If you remove this, add `NEEDS_CURL TRUE` to the `juce_add_plugin` call
    JUCE_VST3_CAN_REPLACE_VST2=0)

# If your target needs extra binary assets, you can add them here. The first argument is the name of
# a new static library target that will include all the binary resources. There is an optional
# `NAMESPACE` argument that can specify the namespace of the generated binary data class. Finally,
# the SOURCES argument should be followed by a list of source files that should be built into the
# static library. These source files can be of any kind (wav data, images, fonts, icons etc.).
# Conversion to binary-data will happen when your target is built.

# juce_add_binary_data(AudioPluginData SOURCES ...)

# `target_link_libraries` links libraries and JUCE modules to other libraries or executables. Here,
# we're linking our executable target to the `juce::juce_audio_utils` module. Inter-module
# dependencies are resolved automatically, so `juce_core`, `juce_events` and so on will also be
# linked automatically. If we'd generated a binary data target above, we would need to link to it
# here too. This is a standard CMake command.

target_link_libraries(Hera
  PRIVATE
  juce::juce_audio_utils
  juce::juce_dsp
  PUBLIC
  juce::juce_recommended_config_flags
  juce::juce_recommended_lto_flags)


juce_add_binary_data(HeraData
SOURCES
"Resources/presets.pak"
"Resources/MagicUI.xml")

set_target_properties(HeraData PROPERTIES
    POSITION_INDEPENDENT_CODE ON)
  
file(MAKE_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Resources")

file(GLOB PRESET_FILES
RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
"Presets/*.xml")

find_program(RDMD "rdmd")
if(NOT RDMD)
message(STATUS "The program \"rdmd\" is not available, the presets will not be rebuilt.")
else()
add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/Resources/presets.pak"
    COMMAND "${RDMD}" "${CMAKE_CURRENT_SOURCE_DIR}/Scripts/pak.d" create "${CMAKE_CURRENT_SOURCE_DIR}/Resources/presets.pak" ${PRESET_FILES}
    DEPENDS ${PRESET_FILES}
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")
endif()

target_link_libraries(Hera
PRIVATE
HeraData)

###
juce_add_modules(
ALIAS_NAMESPACE foleys
"Thirdparty/Modules/foleys_gui_magic")

if(NOT HERA_DESIGNER)
target_compile_definitions(foleys_gui_magic
    INTERFACE
    "FOLEYS_SHOW_GUI_EDITOR_PALLETTE=0")
endif()

###
target_link_libraries(Hera
PRIVATE
foleys::foleys_gui_magic)

###
add_library(hiir INTERFACE)
target_include_directories(hiir INTERFACE "Thirdparty/hiir")

###
target_link_libraries(Hera
PRIVATE
hiir)

###
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
target_compile_options(Hera PRIVATE "-Wall")
endif()