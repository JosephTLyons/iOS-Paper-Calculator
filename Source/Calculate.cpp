//
//  Calculate.cpp
//  Paper Calculator Class
//
//  Created by Joseph Lyons on 2/27/17.
//  Copyright © 2017 Joseph Lyons. All rights reserved.
//

#include "Calculate.hpp"

Calculate::Calculate()
{
    advancedClear();
}

/**************************************************/

void Calculate::clearTotal()
{
    total = 0;
}

void Calculate::resetToNonDecimalNumberInput()
{
    decimalPointFlag              = false;
    dividingNumberForDecimalPlace = 1;
}

void Calculate::basicClear()
{
    clearTotal();
    operandOne                    = 0;
    
    resetToNonDecimalNumberInput();
}

// Used by constructor and when holding down the clear button for 3+ seconds
void Calculate::advancedClear()
{
    basicClear();
    
    storageA       = 0;
    storageB       = 0;
    operatorChosen = 0;
}

void Calculate::performCalculation()
{
    switch (operatorChosen)
    {
        case addition:
            total = operandOne + total;
            break;
        case subtraction:
            total = operandOne - total;
            break;
        case multiplication:
            total = operandOne * total;
            break;
        case division:
            total = operandOne / total;
            break;
            // Do nothing
        default:
            break;
    }
}

void Calculate::calculateNumberInput(const int &singleDigitInput)
{
    double temporary = singleDigitInput;
    
    if(decimalPointFlag == false)
    {
        total *= 10;
        total += temporary;
    }
    
    else
    {
        dividingNumberForDecimalPlace *= 10;
        temporary /= dividingNumberForDecimalPlace;
        total += temporary;
    }
}

/**************************************************/

void Calculate::setOperationChosen(const int &input)
{
    operatorChosen = input;
}

void Calculate::setDecimalPointFlag(const bool &trueOrFalse)
{
    decimalPointFlag = trueOrFalse;
}

double Calculate::getTotalValue()
{
    return total;
}

void Calculate::transferTotalToOperand()
{
    operandOne = total;
    clearTotal();
}
