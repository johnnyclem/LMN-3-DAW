#pragma once
#include <juce_gui_extra/juce_gui_extra.h>
#include <tracktion_engine/tracktion_engine.h>
#include <app_services/app_services.h>
#include <app_view_models/app_view_models.h>
#include "SimpleListView.h"

class ModifierPluginDestinationsListView
        : public juce::Component,
          public app_view_models::EditItemListViewModel::Listener,
          public app_view_models::ItemListState::Listener,
          public app_services::MidiCommandManager::Listener
{
public:

    ModifierPluginDestinationsListView(tracktion_engine::AudioTrack::Ptr t, juce::Identifier identifier, app_services::MidiCommandManager& mcm);
    ~ModifierPluginDestinationsListView() override;
    void paint(juce::Graphics& g) override;
    void resized() override;

    void encoder1Increased() override;
    void encoder1Decreased() override;
    void encoder1ButtonReleased() override;

    void selectedIndexChanged(int newIndex) override;

private:

    tracktion_engine::AudioTrack::Ptr track;
    juce::Identifier modifierIdentifier;
    app_services::MidiCommandManager& midiCommandManager;
    app_view_models::ModifierPluginDestinationsViewModel viewModel;
    SimpleListView listView;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ModifierPluginDestinationsListView)
};


