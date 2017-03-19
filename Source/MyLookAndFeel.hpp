//
//  MyLookAndFeel.hpp
//  Paper Calculator
//
//  Created by Joseph Lyons on 3/16/17.
//
//

#ifndef MyLookAndFeel_hpp
#define MyLookAndFeel_hpp

#include "../JuceLibraryCode/JuceHeader.h"

struct MyLookAndFeel : public LookAndFeel_V3
{
    Font getTextButtonFont (TextButton&, int buttonHeight) override
    {
        return Font (jmin (20.0f, buttonHeight * 0.6f));
    }
};

#endif /* MyNumberButtonLookAndFeel_hpp */
