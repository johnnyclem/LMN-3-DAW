#include "PluginEditor.h"
#include "PluginProcessor.h"

DexedSynthPluginEditor::DexedSynthPluginEditor (DexedSynthPluginProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    setSize (400, 300);
}

DexedSynthPluginEditor::~DexedSynthPluginEditor()
{
}

void DexedSynthPluginEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::black);
    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Dexed Synth Plugin", getLocalBounds(), juce::Justification::centred, 1);
}

void DexedSynthPluginEditor::resized()
{
    // Position controls here
}
