
#ifndef CONCRETESTATEC_H
#define CONCRETESTATEC_H


#include "State.h"

#include <string>


class ConcreteStateC : public State
{
    public:
       void print(const std::string &str);
};

#endif // CONCRETESTATEC_H
