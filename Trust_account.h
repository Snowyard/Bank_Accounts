#pragma once
#include "Savings_account.h"

class Trust_account: public Savings_account {
private:
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_bal = 0.00;
    static constexpr double int_rate = 0.00;

public:
    int withdraw_limit = 3;
    int withdraws = 0;
    Trust_account(std::string name_val = def_name, double bal_val = def_bal, double int_val = int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() {return balance;}
    

};