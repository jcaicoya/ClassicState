
#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H


#include "State.h"

#include <string>


class ConcreteStateB : public State
{
    public:
     void print(const std::string &str);
};

#endif // CONCRETESTATEB_H
