#pragma once

namespace internal_plugins {

class DexedSynthPlugin : public tracktion::ExternalPlugin {
  public:
    explicit DexedSynthPlugin(tracktion::PluginCreationInfo info);

    static const char *getPluginName() { return NEEDS_TRANS("Dexed"); }

    static const char *xmlTypeName;

    juce::String getName() override { return TRANS("Dexed"); }

    juce::String getPluginType() override { return xmlTypeName; }

    juce::String getShortName(int) override { return "Dexed"; }

    juce::String getSelectableDescription() override {
        return TRANS("Dexed");
    }
};

} // namespace internal_plugins
