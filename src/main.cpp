////////////////////////////////////////////////////////////////////////////
/**
 *  @file   main.cpp
 *  @date   Fri August 25 2021
 *  @brief  Entry Point of Calculator
 */
////////////////////////////////////////////////////////////////////////////

#include "../inc/Calculator.h"


int main() 
{
    //This calculator can do super basic and simple math. 
    
    float number1, number2;
    char op;
    std::cout << "Welcome to the Calculator C++ learning project." << std::endl;
    std::cout << "Please enter math problem" << std::endl;
    std::cin >> number1 >> op >>  number2;
    switch(op){
        case '+':
            add(number1, number2, op);
            break;
        case '*':
            multiply(number1, number2, op);
            break;
        case '/':
            divide(number1, number2,op);
            break;
        case '-':
            subtract(number1, number2,op);
            break;
        case '%':
            modulus(number1, number2, op);
            break;    
        default:
            throw std::runtime_error("unknown operator");
    }



    
    return 0;
    //here is the end of the program 
}

void add (float number1, float number2, char op){
    std::cout << number1 << op << number2 << " = " << number1+number2 << std::endl; 
}

void multiply (float number1, float number2, char op){
    std::cout << number1 << op << number2 << " = " << number1*number2 << std::endl; 
}

void divide (float number1, float number2, char op){
    std::cout << number1 << op << number2 << " = " << number1/number2 << std::endl; 
}

void subtract (float number1, float number2, char op){
    std::cout << number1 << op << number2 << " = " << number1-number2 << std::endl; 
}

void modulus(float number1, float number2, char op){
    std::cout << number1 << op << number2 << " = " << (int)number1%(int)number2 << std:: endl;
}
