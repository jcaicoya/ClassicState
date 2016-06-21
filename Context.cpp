
#include "Context.h"

#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "ConcreteStateC.h"


Context::Context() : _currentStateType(Context::NORMAL),
                     _state(0)
{
    _state = new ConcreteStateA;
}


Context::Context(const Context &rhs) : _currentStateType(rhs._currentStateType),
                                       _state(buildNewState())
{
}

Context & Context::operator=(const Context &rhs)
{
    if(this != &rhs)
    {
        delete _state;
        _currentStateType = rhs._currentStateType;
        _state = buildNewState();
    }
    return *this;
}

Context::~Context()
{
    delete _state;
}

Context::STATE Context::currentStateType() const
{
    return _state;
}

void Context::switchState(Context::STATE state)
{
   delete _state;
   _currentStateType = state;
   _state = buildNewState();

}


void Context::print(const std::string &str)
{
    _state->print(str);
}



State * Context::buildNewState() const
{
   State *result = 0;
   if(_currentStateType == Context::UPPER)
   {
       result = new ConcreteStateB;
   }
   else if(_currentStateType == Context::LOWER)
   {
       result = new ConcreteStateC;
   }
   else
   {
       result = new ConcreteStateA;
   }
   return result;
}

