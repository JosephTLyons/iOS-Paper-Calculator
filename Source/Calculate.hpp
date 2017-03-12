//
//  Calculate.hpp
//  Paper Calculator Class
//
//  Created by Joseph Lyons on 2/27/17.
//  Copyright © 2017 Joseph Lyons. All rights reserved.
//

#ifndef Calculate_hpp
#define Calculate_hpp

class Calculate
{
private:
    
    double total;
    double operandOne;
    double storageA;
    double storageB;
    
    // enum values are related to what operatorChosen will do when those values are stored in it
    enum{addition = 1, subtraction, multiplication, division};
    int operatorChosen;
    int operatorUsageCount;
    
    double calculateInputNumber(double baseNumber, const int &singleDigitInput);
    
    bool decimalPointFlag;
    double dividingNumberForDecimalPlace;
    
    void clearTotal();
    void clearOperand();
    void resetToNonDecimalNumberInput();
    void setOperationChosen(const int &input);
    
public:
    
    Calculate();
    
    void basicClear();
    void advancedClear();
    
    void performCalculation();
    void executeOperation(const int &input);
    void addToInputValue(const int &singleDigitInput);
    
    void incrementOperatorUsageCount();
    
    void setDecimalPointFlag(const bool &trueOrFalse);
    void setStorageA();
    void setStorageB();
    void setTotalFromStorageA();
    void setTotalFromStorageB();
    
    double getOperandOne();
    double getTotalValue();
};

#endif /* Calculate_hpp */
