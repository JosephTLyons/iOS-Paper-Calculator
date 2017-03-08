/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_156B5A0DC5E114BE__
#define __JUCE_HEADER_156B5A0DC5E114BE__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Calculate.hpp"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Interface  : public Component,
                   public ButtonListener
{
public:
    //==============================================================================
    Interface ();
    ~Interface();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Calculate calculateObject;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextEditor> output;
    ScopedPointer<TextButton> zero;
    ScopedPointer<TextButton> decimalPoint;
    ScopedPointer<TextButton> equals;
    ScopedPointer<TextButton> plus;
    ScopedPointer<TextButton> one;
    ScopedPointer<TextButton> two;
    ScopedPointer<TextButton> three;
    ScopedPointer<TextButton> four;
    ScopedPointer<TextButton> five;
    ScopedPointer<TextButton> six;
    ScopedPointer<TextButton> seven;
    ScopedPointer<TextButton> eight;
    ScopedPointer<TextButton> nine;
    ScopedPointer<TextButton> minus;
    ScopedPointer<TextButton> multiply;
    ScopedPointer<TextButton> divide;
    ScopedPointer<TextButton> set;
    ScopedPointer<TextButton> setA;
    ScopedPointer<TextButton> setB;
    ScopedPointer<TextButton> clear;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Interface)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_156B5A0DC5E114BE__
