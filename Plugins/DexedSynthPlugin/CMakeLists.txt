cmake_minimum_required(VERSION 3.15)

project(DexedSynthPlugin VERSION 0.0.1)

# Find JUCE and the required modules
find_package(JUCE CONFIG REQUIRED
    COMPONENTS
        juce_audio_utils
        juce_audio_devices
        juce_audio_formats
        juce_audio_processors
)

# Create the plugin target
juce_add_plugin
