#pragma once

#include "PluginProcessor.h"

class DexedSynthPluginEditor : public juce::AudioProcessorEditor
{
public:
    DexedSynthPluginEditor (DexedSynthPluginProcessor&);
    ~DexedSynthPluginEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    DexedSynthPluginProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DexedSynthPluginEditor)
};