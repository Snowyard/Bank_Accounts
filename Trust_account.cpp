#include "Trust_account.h"

Trust_account::Trust_account(std::string name_val, double bal_val, double int_val)
:   Savings_account(name_val, bal_val, int_val) {
}

bool Trust_account::deposit(double amount)
{
    if(amount >= bonus_threshold)
        amount += bonus_amount;
    
    return Savings_account::deposit(amount);
}       



bool Trust_account::withdraw(double amount)
{
    
    if(withdraws < 3 && amount < balance * max_withdraw_percent) {
            ++withdraws;
            return Savings_account::withdraw(amount);
            
        } else
            return false;
}

