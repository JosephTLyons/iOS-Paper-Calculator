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

void Calculate::clearOperand()
{
    operand = 0;
}

void Calculate::resetToNonDecimalNumberInput()
{
    decimalPointFlag              = false;
    dividingNumberForDecimalPlace = 1;
}

void Calculate::basicClear()
{
    clearTotal();
    operatorUsageCount = 0;
    clearOperand();
    resetToNonDecimalNumberInput();
}

// Used by constructor and when clear is pressed while func is being held down
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
            total = total + operand;
            break;
        case subtraction:
            total = total - operand;
            break;
        case multiplication:
            total = total * operand;
            break;
        case division:
            total = total / operand;
            break;
            // Do nothing
        default:
            break;
    }
}

void Calculate::executeOperation(const int &input)
{
    setOperationChosen(input);
    clearOperand();
    resetToNonDecimalNumberInput();
}

void Calculate::addToInputValue(const int &singleDigitInput)
{
    // Only store in total for first calculation
    if (operatorUsageCount == 0)
    {
        total = calculateInputNumber(total, singleDigitInput);
    }

    else
    {
        operand = calculateInputNumber(operand, singleDigitInput);
    }
}

void Calculate::incrementOperatorUsageCount()
{
    operatorUsageCount++;
}

double Calculate::calculateInputNumber(double baseNumber, const int &singleDigitInput)
{
    double temporarySingleValueInput = singleDigitInput;

    // Build whole value number
    if(decimalPointFlag == false)
    {
        baseNumber *= 10;
        baseNumber += temporarySingleValueInput;
    }

    // Build values to the right of the decimal point
    else
    {
        dividingNumberForDecimalPlace *= 10;
        temporarySingleValueInput /= dividingNumberForDecimalPlace;
        baseNumber += temporarySingleValueInput;
    }

    return baseNumber;
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

void Calculate::setStorageA()
{
    storageA = total;
}

void Calculate::setStorageB()
{
    storageB = total;
}

void Calculate::setTotalFromStorageA()
{
    total = storageA;
}

void Calculate::setTotalFromStorageB()
{
    total = storageB;
}

void Calculate::setOperandFromStorageA()
{
    operand = storageA;
}

void Calculate::setOperandFromStorageB()
{
    operand = storageB;
}

double Calculate::getOperandOne()
{
    return operand;
}

double Calculate::getTotalValue()
{
    return total;
}

double Calculate::getStorageA()
{
    return storageA;
}

double Calculate::getStorageB()
{
    return storageB;
}
