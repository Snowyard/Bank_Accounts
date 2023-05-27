#pragma once
#include "Account.h"

class Chequing_account: public Account { 
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_bal = 0.00;
    
public:
    Chequing_account(std::string name_val = def_name, double bal_val = def_bal);
    
    static constexpr double per_cheque_fee = 1.50;
    
    bool withdraw(double amount);
    // Inherits the Account::deposit method
    
};

