#include <iostream>
#include <fstream>
#include <algorithm>

/**
 * @brief 
 * this is a generic function that returns the value of the subraction of the parameters
 * @tparam HELLO 
 * --this is the generic typename,it can either be a float or an integer value
 * @param firstNumber 
 * this is a symbol that points to the address of the firstNumber
 * @param secondNumber 
 * this is a symbol that points to the address of the secondNumber
 * @return HELLO 
 * --if everything executes well, return the value of the subtraction of the parameters will return 
 */
namespace initial
{
    template<typename Hello>
    Hello subtract(Hello FirstNumber, Hello SecondNumber) 
    {
        return FirstNumber - SecondNumber;
    }
}

/**
 * @brief 
 * the integer datatype has been defined as Sum_of_Money
 */
typedef int Sum_of_Money;

Sum_of_Money HowMuch(Sum_of_Money KareemAcct,Sum_of_Money JacobAcct)
{
    if(KareemAcct==100)
    {
        std::cout<<"the account balance is too small to be configured for subscription,please make sure that you have more than one thousand naira in your account before proceeding"<<std::endl;
    }
    
    return 0;
}
