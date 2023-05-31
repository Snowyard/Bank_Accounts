#include "I_Printable.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const I_Printable &account)
{
    account.print(os);
    return os;
}