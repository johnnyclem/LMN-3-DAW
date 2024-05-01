#include "DrumSamplerPlugin.h"

namespace internal_plugins {

const char *DexedSynthPlugin::xmlTypeName = "dexedSynth";

DexedSynthPlugin::DexedSynthPlugin(tracktion::PluginCreationInfo info)
    : tracktion::ExternalPlugin(info) {}

} // namespace internal_plugins
