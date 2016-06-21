
#include "ConcreteStateC.h"

#include <algorithm>
#include <iostream>



void ConcreteStateC::print(const std::string &str)
{
    std::string strCopy(str);
    std::transform(str.begin(), str.end(), strCopy.begin(), ::tolower);
    std::cout << strCopy << std::endl;
}

