//
//  Calculate.hpp
//  Paper Calculator Class
//
//  Created by Joseph Lyons on 2/27/17.
//  Copyright © 2017 Joseph Lyons. All rights reserved.
//

#ifndef Calculate_hpp
#define Calculate_hpp

#include <stdio.h>

class Calculate
{
private:
    
    double total;
    double operandOne;
    double operandTwo;
    double storageA;
    double storageB;
    
    // enum values are related to what operatorChosen will do when those values are stored in it
    enum{addition = 1, subtraction, multiplication, division};
    int operatorChosen;
    
    bool decimalPointFlag;
    double dividingNumberForDecimalPlace;
    
public:
    
    Calculate();
    
    void basicClear();
    void advancedClear();
    void performCalculation();
    void calculateNumberInput(const int &singleDigitInput);
    
    void add(const double &input);
    void subtract(const double &input);
    void multiply(const double &input);
    void divide(const double &input);
    
    void setOperandOne(const double &input);
    void setOperandTwo(const double &input);
    void setStorageA(const double &input);
    void setStorageB(const double &input);
    void setOperationChosen(const int &input);
    void setDecimalPointFlag(const bool &trueOrFalse);
};

#endif /* Calculate_hpp */
