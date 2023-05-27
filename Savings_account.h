#pragma once
#include "Account.h"

class Savings_account : public Account {
private:
    friend std::ostream &operator<<(std::ostream &os, const Savings_account &sav_account);
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_bal = 0.00;
    static constexpr double def_int = 0.00;
    
protected:
    double int_rate;
    
public:
    Savings_account(std::string name_val = def_name, double bal_val = def_bal, double int_val = def_int);
    bool deposit(double amount);
    
    
};