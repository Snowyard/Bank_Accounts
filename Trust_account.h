#pragma once
#include "Savings_account.h"

class Trust_account: public Savings_account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_bal = 0.00;
    static constexpr double int_rate = 0.00;
    static constexpr double bonus_amount = 50;
    static constexpr double bonus_threshold = 5000;
    static constexpr double max_withdraw_percent = 0.2;

public:
    Trust_account(std::string name_val = def_name, double bal_val = def_bal, double int_val = int_rate);
    
    int withdraw_limit = 3;
    int withdraws = 0;

    //Deposits of $5000.00 or more will recieve a $50 bonus
    bool deposit(double amount);
    
    //Only allowed a maximum of 3 withdrawals, each withdrawal cannot exceed 20% of the total balance
    bool withdraw(double amount);
    
    double get_balance() {return balance;}
    

};