#pragma once
#include "Account.h"

class Chequing_account: public Account { 
private:
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_bal = 0.00;
    
public:
    bool withdraw(double amount);
    Chequing_account(std::string name_val = def_name, double bal_val = def_bal);
    
};

