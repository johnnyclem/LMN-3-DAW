#pragma once
#include <juce_graphics/juce_graphics.h>
#include <juce_gui_basics/juce_gui_basics.h>

class AppLookAndFeel : public juce::LookAndFeel_V4 {
  public:
    AppLookAndFeel();

    juce::Colour blueColour = juce::Color.fromRGBA(9.0, 132.0, 227.0, 1.0); //juce::Color.fromRGBA(0.2, 0.2, 0.2, 1.0); //juce::Colour(0xff458588);
    juce::Colour greenColour = juce::Color.fromRGBA(0.0, 184.0, 148.0, 1.0); //juce::Colour(0xff689d6a);
    juce::Colour whiteColour = juce::Color.fromRGBA(223.0, 230.0, 233.0, 1.0); //juce::Colour(0xfff9f5d7);
    juce::Colour redColour = juce::Color.fromRGBA(214.0, 48.0, 49.0, 1.0); //juce::Colour(0xffcc241d);
    juce::Colour yellowColour = juce::Color.fromRGBA(253.0, 203.0, 110.0, 1.0); //juce::Colour(0xffd79921);
    juce::Colour orangeColour = juce::Color.fromRGBA(225.0, 112.0, 85.0, 1.0); //juce::Colour(0xffd65d0e);
    juce::Colour purpleColour = juce::Color.fromRGBA(162.0, 155.0, 254.0, 1.0); //juce::Colour(0xffb16286);
    juce::Colour blackColour = juce::Color.fromRGBA(45.0, 52.0, 54.0, 1.0); //juce::Colour(0xff282828);
    juce::Colour greenYellowColour = juce::Color.fromRGBA(85.0, 239.0, 196.0, 1.0); //juce::Colour(0xff98971a);

    // These are just defaults
    juce::Colour backgroundColour = juce::Color.fromRGBA(99.0, 110.0, 114.0, 1.0); //juce::Colour(0xff1d2021);
    juce::Colour textColour = juce::Color.fromRGBA(223.0, 230.0, 233.0, 1.0); //juce::Colour(0xfff9f5d7);
    juce::Colour colour1 = blueColour;
    juce::Colour colour2 = greenColour;
    juce::Colour colour3 = whiteColour;
    juce::Colour colour4 = redColour;
    juce::Colour colour5 = greenYellowColour;
    juce::Colour colour6 = orangeColour;
    juce::Colour colour7 = purpleColour;
    juce::Colour colour8 = yellowColour;

    juce::Array<juce::Colour> colours = juce::Array<juce::Colour>(
        {colour1, colour2, colour4, colour5, colour6, colour7, colour8});

    [[nodiscard]] juce::Colour getRandomColour() const {
        return colours[juce::Random::getSystemRandom().nextInt(colours.size())];
    }

  private:
    void readColoursFromConfig();
};
