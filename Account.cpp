#include "Account.h"
#include "Savings_account.h"
#include <iostream>
#include <string>

Account::Account(std::string name_val, double bal_val)
:   name{name_val}, balance{bal_val} {
}

//Deposit
bool Account::deposit(double amount)
{
    if(amount > 0) 
    {
        balance += amount;
        return true;
    } else
        return false;
}

//Withdraw
bool Account::withdraw(double amount)
{
    if(amount < balance)
    {
        balance -= amount;
        return true;
    } else
        return false;
}

//Getter
double Account::get_bal() const 
{   
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "[Account: " << account.name << ": " << account.balance << "]";
    
    return os;
}