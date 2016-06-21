
#ifndef STATE_H
#define STATE_H


#include <string>


class State
{
    public:

        enum CASE {A, B, C};

        virtual void print(const std::string &src) = 0;
};

#endif // STATE_H
