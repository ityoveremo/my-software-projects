#include <iostream>
#include <fstream>

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