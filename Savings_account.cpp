#include "Savings_account.h"
#include <iostream>

Savings_account::Savings_account(std::string name_val, double bal_val, double int_val)
:   Account(name_val, bal_val), int_rate{int_val} {
}

bool Savings_account::deposit(double amount)
{
    amount = amount + amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_account &sav_account)
{
    os << "[Savings Account: " << sav_account.name << ": " << sav_account.balance 
       << ", " << sav_account.int_rate << "%]";
       return os;
}