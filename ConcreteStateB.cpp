
#include "ConcreteStateB.h"

#include <algorithm>
#include <iostream>



void ConcreteStateB::print(const std::string &str)
{
    std::string strCopy(str);
    std::transform(str.begin(), str.end(), strCopy.begin(), ::toupper);
    std::cout << strCopy << std::endl;
}
