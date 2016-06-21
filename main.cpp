
#include "Context.h"

#include <string>



int main()
{
    std::string str("Hello World!");
    Context ct;
    ct.print(str);
    ct.switchState(Context::UPPER);
    ct.print(str);
    ct.switchState(Context::LOWER);
    ct.print(str);
    ct.switchState(Context::NORMAL);
    ct.print(str);
    return 0;
}
