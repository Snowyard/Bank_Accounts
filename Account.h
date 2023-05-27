#pragma once
#include <string>

class Account {
private:
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_bal = 0.00;
    
protected:
    std::string name;
    double balance;
    
public:
    Account(std::string name_val = def_name, double bal_val = def_bal);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_bal() const;

};