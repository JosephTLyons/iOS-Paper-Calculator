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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Interface.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Interface::Interface ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (output = new TextEditor ("output"));
    output->setMultiLine (false);
    output->setReturnKeyStartsNewLine (false);
    output->setReadOnly (true);
    output->setScrollbarsShown (true);
    output->setCaretVisible (false);
    output->setPopupMenuEnabled (true);
    output->setColour (TextEditor::textColourId, Colours::white);
    output->setColour (TextEditor::backgroundColourId, Colour (0xff1f1f1f));
    output->setText (String());

    addAndMakeVisible (zero = new TextButton ("zero"));
    zero->setButtonText (TRANS("0"));
    zero->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    zero->addListener (this);

    addAndMakeVisible (decimalPoint = new TextButton ("decimalPoint"));
    decimalPoint->setButtonText (TRANS("."));
    decimalPoint->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    decimalPoint->addListener (this);

    addAndMakeVisible (equals = new TextButton ("equals"));
    equals->setButtonText (TRANS("="));
    equals->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    equals->addListener (this);
    equals->setColour (TextButton::buttonColourId, Colour (0xff2de97a));

    addAndMakeVisible (plus = new TextButton ("plus"));
    plus->setButtonText (TRANS("+"));
    plus->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    plus->addListener (this);
    plus->setColour (TextButton::buttonColourId, Colours::aqua);

    addAndMakeVisible (one = new TextButton ("one"));
    one->setButtonText (TRANS("1"));
    one->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    one->addListener (this);

    addAndMakeVisible (two = new TextButton ("two"));
    two->setButtonText (TRANS("2"));
    two->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    two->addListener (this);

    addAndMakeVisible (three = new TextButton ("three"));
    three->setButtonText (TRANS("3"));
    three->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    three->addListener (this);

    addAndMakeVisible (four = new TextButton ("four"));
    four->setButtonText (TRANS("4"));
    four->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    four->addListener (this);

    addAndMakeVisible (five = new TextButton ("five"));
    five->setButtonText (TRANS("5"));
    five->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    five->addListener (this);

    addAndMakeVisible (six = new TextButton ("six"));
    six->setButtonText (TRANS("6"));
    six->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    six->addListener (this);

    addAndMakeVisible (seven = new TextButton ("seven"));
    seven->setButtonText (TRANS("7"));
    seven->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    seven->addListener (this);

    addAndMakeVisible (eight = new TextButton ("eight"));
    eight->setButtonText (TRANS("8"));
    eight->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    eight->addListener (this);

    addAndMakeVisible (nine = new TextButton ("nine"));
    nine->setButtonText (TRANS("9"));
    nine->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    nine->addListener (this);

    addAndMakeVisible (minus = new TextButton ("minus"));
    minus->setButtonText (TRANS("-"));
    minus->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    minus->addListener (this);
    minus->setColour (TextButton::buttonColourId, Colours::aqua);

    addAndMakeVisible (multiply = new TextButton ("multiply"));
    multiply->setButtonText (TRANS("X"));
    multiply->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    multiply->addListener (this);
    multiply->setColour (TextButton::buttonColourId, Colours::aqua);

    addAndMakeVisible (divide = new TextButton ("divide"));
    divide->setButtonText (TRANS("/"));
    divide->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    divide->addListener (this);
    divide->setColour (TextButton::buttonColourId, Colours::aqua);

    addAndMakeVisible (function = new TextButton ("function"));
    function->setButtonText (TRANS("FUNC"));
    function->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    function->addListener (this);
    function->setColour (TextButton::buttonColourId, Colour (0xff929292));
    function->setColour (TextButton::buttonOnColourId, Colours::crimson);
    function->setColour (TextButton::textColourOnId, Colours::black);

    addAndMakeVisible (setA = new TextButton ("setA"));
    setA->setButtonText (TRANS("A"));
    setA->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    setA->addListener (this);
    setA->setColour (TextButton::buttonColourId, Colours::crimson);

    addAndMakeVisible (setB = new TextButton ("setB"));
    setB->setButtonText (TRANS("B"));
    setB->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    setB->addListener (this);
    setB->setColour (TextButton::buttonColourId, Colours::crimson);

    addAndMakeVisible (clear = new TextButton ("clear"));
    clear->setButtonText (TRANS("Clear"));
    clear->setConnectedEdges (Button::ConnectedOnTop | Button::ConnectedOnBottom);
    clear->addListener (this);
    clear->setColour (TextButton::buttonColourId, Colours::crimson);

    addAndMakeVisible (paperCalcLabel = new Label ("paperCalcLabel",
                                                   TRANS("Paper Calculator")));
    paperCalcLabel->setFont (Font ("Chalkduster", 56.00f, Font::plain));
    paperCalcLabel->setJustificationType (Justification::centred);
    paperCalcLabel->setEditable (false, false, false);
    paperCalcLabel->setColour (Label::textColourId, Colours::white);
    paperCalcLabel->setColour (TextEditor::textColourId, Colours::black);
    paperCalcLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (320, 568);


    //[Constructor] You can add your own custom stuff here..

    // Make set button a toggle button
    function->setClickingTogglesState(true);

    // Set initial value to output
    output->setText((String) calculateObject.getTotalValue());

    // Make a new font object and pass into output textEditor
    textEditorFont.setSizeAndStyle(50, normal, 1, 0);
    output->setFont(textEditorFont);

    //[/Constructor]
}

Interface::~Interface()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    output = nullptr;
    zero = nullptr;
    decimalPoint = nullptr;
    equals = nullptr;
    plus = nullptr;
    one = nullptr;
    two = nullptr;
    three = nullptr;
    four = nullptr;
    five = nullptr;
    six = nullptr;
    seven = nullptr;
    eight = nullptr;
    nine = nullptr;
    minus = nullptr;
    multiply = nullptr;
    divide = nullptr;
    function = nullptr;
    setA = nullptr;
    setB = nullptr;
    clear = nullptr;
    paperCalcLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Interface::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff1f1f1f));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Interface::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    output->setBounds (0, 96, 320, 72);
    zero->setBounds (0, 488, 80, 80);
    decimalPoint->setBounds (80, 488, 80, 80);
    equals->setBounds (160, 488, 80, 80);
    plus->setBounds (240, 408, 80, 80);
    one->setBounds (0, 408, 80, 80);
    two->setBounds (80, 408, 80, 80);
    three->setBounds (160, 408, 80, 80);
    four->setBounds (0, 328, 80, 80);
    five->setBounds (80, 328, 80, 80);
    six->setBounds (160, 328, 80, 80);
    seven->setBounds (0, 248, 80, 80);
    eight->setBounds (80, 248, 80, 80);
    nine->setBounds (160, 248, 80, 80);
    minus->setBounds (240, 328, 80, 80);
    multiply->setBounds (240, 248, 80, 80);
    divide->setBounds (240, 168, 80, 80);
    function->setBounds (160, 168, 80, 80);
    setA->setBounds (0, 168, 80, 80);
    setB->setBounds (80, 168, 80, 80);
    clear->setBounds (240, 488, 80, 80);
    paperCalcLabel->setBounds (0, 0, 320, 96);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Interface::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == zero)
    {
        //[UserButtonCode_zero] -- add your button handler code here..

        calculateObject.addToInputValue(0);

        //[/UserButtonCode_zero]
    }
    else if (buttonThatWasClicked == decimalPoint)
    {
        //[UserButtonCode_decimalPoint] -- add your button handler code here..

        calculateObject.setDecimalPointFlag(true);

        //[/UserButtonCode_decimalPoint]
    }
    else if (buttonThatWasClicked == equals)
    {
        //[UserButtonCode_equals] -- add your button handler code here..

        calculateObject.performCalculation();

        //[/UserButtonCode_equals]
    }
    else if (buttonThatWasClicked == plus)
    {
        //[UserButtonCode_plus] -- add your button handler code here..

        calculateObject.executeOperation(addition);
        calculateObject.incrementOperatorUsageCount();

        //[/UserButtonCode_plus]
    }
    else if (buttonThatWasClicked == one)
    {
        //[UserButtonCode_one] -- add your button handler code here..

        calculateObject.addToInputValue(1);

        //[/UserButtonCode_one]
    }
    else if (buttonThatWasClicked == two)
    {
        //[UserButtonCode_two] -- add your button handler code here..

        calculateObject.addToInputValue(2);

        //[/UserButtonCode_two]
    }
    else if (buttonThatWasClicked == three)
    {
        //[UserButtonCode_three] -- add your button handler code here..

        calculateObject.addToInputValue(3);

        //[/UserButtonCode_three]
    }
    else if (buttonThatWasClicked == four)
    {
        //[UserButtonCode_four] -- add your button handler code here..

        calculateObject.addToInputValue(4);

        //[/UserButtonCode_four]
    }
    else if (buttonThatWasClicked == five)
    {
        //[UserButtonCode_five] -- add your button handler code here..

        calculateObject.addToInputValue(5);

        //[/UserButtonCode_five]
    }
    else if (buttonThatWasClicked == six)
    {
        //[UserButtonCode_six] -- add your button handler code here..

        calculateObject.addToInputValue(6);

        //[/UserButtonCode_six]
    }
    else if (buttonThatWasClicked == seven)
    {
        //[UserButtonCode_seven] -- add your button handler code here..

        calculateObject.addToInputValue(7);

        //[/UserButtonCode_seven]
    }
    else if (buttonThatWasClicked == eight)
    {
        //[UserButtonCode_eight] -- add your button handler code here..

        calculateObject.addToInputValue(8);

        //[/UserButtonCode_eight]
    }
    else if (buttonThatWasClicked == nine)
    {
        //[UserButtonCode_nine] -- add your button handler code here..

        calculateObject.addToInputValue(9);

        //[/UserButtonCode_nine]
    }
    else if (buttonThatWasClicked == minus)
    {
        //[UserButtonCode_minus] -- add your button handler code here..

        calculateObject.executeOperation(subtraction);
        calculateObject.incrementOperatorUsageCount();

        //[/UserButtonCode_minus]
    }
    else if (buttonThatWasClicked == multiply)
    {
        //[UserButtonCode_multiply] -- add your button handler code here..

        calculateObject.executeOperation(multiplication);
        calculateObject.incrementOperatorUsageCount();

        //[/UserButtonCode_multiply]
    }
    else if (buttonThatWasClicked == divide)
    {
        //[UserButtonCode_divide] -- add your button handler code here..

        calculateObject.executeOperation(division);
        calculateObject.incrementOperatorUsageCount();

        //[/UserButtonCode_divide]
    }
    else if (buttonThatWasClicked == function)
    {
        //[UserButtonCode_function] -- add your button handler code here..
        //[/UserButtonCode_function]
    }
    else if (buttonThatWasClicked == setA)
    {
        //[UserButtonCode_setA] -- add your button handler code here..

        if(function->getToggleState())
        {
            calculateObject.setStorageA();
        }
        
        else
        {
            calculateObject.setTotalFromStorageA();
        }

        //[/UserButtonCode_setA]
    }
    else if (buttonThatWasClicked == setB)
    {
        //[UserButtonCode_setB] -- add your button handler code here..

        if(function->getToggleState())
        {
            calculateObject.setStorageB();
        }
        
        else
        {
            calculateObject.setTotalFromStorageB();
        }

        //[/UserButtonCode_setB]
    }
    else if (buttonThatWasClicked == clear)
    {
        //[UserButtonCode_clear] -- add your button handler code here..

        if(function->getToggleState())
        {
            calculateObject.advancedClear();
        }

        else
        {
            calculateObject.basicClear();
        }

        output->setText((String) calculateObject.getOperandOne());

        //[/UserButtonCode_clear]
    }

    //[UserbuttonClicked_Post]
    
    output->setText((String) calculateObject.getTotalValue());
    
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Interface" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="320" initialHeight="568">
  <BACKGROUND backgroundColour="ff1f1f1f"/>
  <TEXTEDITOR name="output" id="ef90af45fd38f38d" memberName="output" virtualName=""
              explicitFocusOrder="0" pos="0 96 320 72" textcol="ffffffff" bkgcol="ff1f1f1f"
              initialText="" multiline="0" retKeyStartsLine="0" readonly="1"
              scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="zero" id="f19566c64d00a477" memberName="zero" virtualName=""
              explicitFocusOrder="0" pos="0 488 80 80" buttonText="0" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="decimalPoint" id="80357dcaa5141c0e" memberName="decimalPoint"
              virtualName="" explicitFocusOrder="0" pos="80 488 80 80" buttonText="."
              connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="equals" id="45169ab5194b6581" memberName="equals" virtualName=""
              explicitFocusOrder="0" pos="160 488 80 80" bgColOff="ff2de97a"
              buttonText="=" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="plus" id="b020b4abf9fd0751" memberName="plus" virtualName=""
              explicitFocusOrder="0" pos="240 408 80 80" bgColOff="ff00ffff"
              buttonText="+" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="one" id="15e81326eba0e0cf" memberName="one" virtualName=""
              explicitFocusOrder="0" pos="0 408 80 80" buttonText="1" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="two" id="83ec8f83303690b6" memberName="two" virtualName=""
              explicitFocusOrder="0" pos="80 408 80 80" buttonText="2" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="three" id="c847e501abcd5e83" memberName="three" virtualName=""
              explicitFocusOrder="0" pos="160 408 80 80" buttonText="3" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="four" id="eecb82f667a16fd3" memberName="four" virtualName=""
              explicitFocusOrder="0" pos="0 328 80 80" buttonText="4" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="five" id="658a51d2ff764315" memberName="five" virtualName=""
              explicitFocusOrder="0" pos="80 328 80 80" buttonText="5" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="six" id="42cb445d3b11a17f" memberName="six" virtualName=""
              explicitFocusOrder="0" pos="160 328 80 80" buttonText="6" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="seven" id="81bd3943e11f3c45" memberName="seven" virtualName=""
              explicitFocusOrder="0" pos="0 248 80 80" buttonText="7" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="eight" id="e9c8f0d260946908" memberName="eight" virtualName=""
              explicitFocusOrder="0" pos="80 248 80 80" buttonText="8" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="nine" id="2ee61b01632eb18c" memberName="nine" virtualName=""
              explicitFocusOrder="0" pos="160 248 80 80" buttonText="9" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="minus" id="ec24c1b3de1f2aae" memberName="minus" virtualName=""
              explicitFocusOrder="0" pos="240 328 80 80" bgColOff="ff00ffff"
              buttonText="-" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="multiply" id="f5beeca49d4742cc" memberName="multiply" virtualName=""
              explicitFocusOrder="0" pos="240 248 80 80" bgColOff="ff00ffff"
              buttonText="X" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="divide" id="e1847e3bb1546dd7" memberName="divide" virtualName=""
              explicitFocusOrder="0" pos="240 168 80 80" bgColOff="ff00ffff"
              buttonText="/" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="function" id="75edee8fa483a117" memberName="function" virtualName=""
              explicitFocusOrder="0" pos="160 168 80 80" bgColOff="ff929292"
              bgColOn="ffdc143c" textColOn="ff000000" buttonText="FUNC" connectedEdges="12"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="setA" id="8165831a8eddd1a0" memberName="setA" virtualName=""
              explicitFocusOrder="0" pos="0 168 80 80" bgColOff="ffdc143c"
              buttonText="A" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="setB" id="845f3f0ecd702467" memberName="setB" virtualName=""
              explicitFocusOrder="0" pos="80 168 80 80" bgColOff="ffdc143c"
              buttonText="B" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="clear" id="b6484fd5b491bd9b" memberName="clear" virtualName=""
              explicitFocusOrder="0" pos="240 488 80 80" bgColOff="ffdc143c"
              buttonText="Clear" connectedEdges="12" needsCallback="1" radioGroupId="0"/>
  <LABEL name="paperCalcLabel" id="73e54c5cb21febf6" memberName="paperCalcLabel"
         virtualName="" explicitFocusOrder="0" pos="0 0 320 96" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Paper Calculator"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Chalkduster" fontsize="56" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
