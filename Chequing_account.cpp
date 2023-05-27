#include "Chequing_account.h"

Chequing_account::Chequing_account(std::string name_val, double bal_val)
:   Account(name_val, bal_val) {
}

bool Chequing_account::withdraw(double amount)
{
    amount += per_cheque_fee;
    return Account::withdraw(amount);
}
