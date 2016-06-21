
#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

#include <string>



class Context
{
    public:
        enum STATE {NORMAL, UPPER, LOWER};

        Context();
        Context(const Context &rhs);
        Context & operator=(const Context &rhs);
        ~Context();

        Context::STATE currentStateType() const;
        void switchState(STATE state);
        void print(const std::string &str);

    private:
        STATE _currentStateType;
        State *_state;

        State * buildNewState() const;
};

#endif // CONTEXT_H
