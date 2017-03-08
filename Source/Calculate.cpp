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

void Calculate::clearOperand()
{
    operandOne = 0;
}

void Calculate::resetToNonDecimalNumberInput()
{
    decimalPointFlag              = false;
    dividingNumberForDecimalPlace = 1;
}

void Calculate::basicClear()
{
    total = 0;
    clearOperand();
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
            total = total + operandOne;
            break;
        case subtraction:
            total = total - operandOne;
            break;
        case multiplication:
            total = total * operandOne;
            break;
        case division:
            total = total / operandOne;
            break;
            // Do nothing
        default:
            break;
    }
}

void Calculate::executeOperation(const int &input)
{
    setOperationChosen(input);
    transferOperandToTotal();
    resetToNonDecimalNumberInput();
}

void Calculate::calculateNumberInput(const int &singleDigitInput)
{
    double temporary = singleDigitInput;
    
    if(decimalPointFlag == false)
    {
        operandOne *= 10;
        operandOne += temporary;
    }
    
    else
    {
        dividingNumberForDecimalPlace *= 10;
        temporary /= dividingNumberForDecimalPlace;
        operandOne += temporary;
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

void Calculate::setStorageA(const int &input)
{
    storageA = total;
}

void Calculate::setStorageB(const int &input)
{
    storageB = total;
}

double Calculate::getOperandOne()
{
    return operandOne;
}

double Calculate::getTotalValue()
{
    return total;
}

void Calculate::transferOperandToTotal()
{
    total = operandOne;
    clearOperand();
}
