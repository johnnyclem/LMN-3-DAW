#include "PluginProcessor.h"
#include "PluginEditor.h"

DexedSynthPluginProcessor::DexedSynthPluginProcessor()
{
}

DexedSynthPluginProcessor::~DexedSynthPluginProcessor()
{
}

void DexedSynthPluginProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
}

void DexedSynthPluginProcessor::releaseResources()
{
}

void DexedSynthPluginProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    buffer.clear();
    // Your processing code here
}

juce::AudioProcessorEditor* DexedSynthPluginProcessor::createEditor()
{
    return new DexedSynthPluginEditor (*this);
}

void DexedSynthPluginProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // Your state saving code here
}

void DexedSynthPluginProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // Your state restoring code here
}
