/*
  ==============================================================================

    Track.h
    Created: 21 Feb 2022 4:48:17pm
    Author:  Tunist

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Track  : public juce::Component
{
public:
    Track();
    ~Track() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Track)
};
