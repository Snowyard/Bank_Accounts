#include "Acc_Utility.h"
#include <iostream>

//Utility helper for Account class

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n============Account============\n";
    for(auto const &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n============Depositing to Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.deposit(amount))
            std::cout << "Depositing " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n============Withdrawing from Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.withdraw(amount))
            std::cout << "Withdrawing " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
    }
}



//Utility helper for Savings_account class

void display(const std::vector<Savings_account> &accounts)
{
    std::cout << "\n============Savings Accounts============\n";
    for(auto const &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_account> &accounts, double amount)
{
    std::cout << "\n============Depositing to Savings Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.deposit(amount)) 
            std::cout << "Depositing " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << std::endl;
    }
        
}

void withdraw(std::vector<Savings_account> &accounts, double amount)
{
    std::cout << "\n============Withdrawing from Savings Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.withdraw(amount))
            std::cout << "Withdrawing " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
    }
}

//Utility helper for Chequing class

void display(const std::vector<Chequing_account> &accounts)
{
    std::cout << "\n============Chequing Accounts============\n";
    for(auto const &acc: accounts)
        std::cout << acc << std::endl;
}


void deposit(std::vector<Chequing_account> &accounts, double amount)
{
    std::cout << "\n============Depositing to Chequing Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.deposit(amount)) 
            std::cout << "Depositing " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Chequing_account> &accounts, double amount)
{
    std::cout << "\n============Withdrawing from Chequing Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.withdraw(amount))
            std::cout << "Withdrawing " << amount << " from " << acc << " ($" << Chequing_account::per_cheque_fee << " Withdrawal Fee Enacted)" << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
    } 
}

//Utility helper for Trust_account class
void display(const std::vector<Trust_account> &accounts)
{
    std::cout << "\n============Trust Accounts============\n";
    for(auto const &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Trust_account> &accounts, double amount)
{
    std::cout << "\n============Depositing to Trust Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.deposit(amount)) 
            std::cout << "Depositing " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Trust_account> &accounts, double amount)
{
    std::cout << "\n============Withdrawing from Trust Accounts============\n";
    for(auto &acc: accounts)
    {
        if(acc.withdraw(amount))
            std::cout << "Withdrawing " << amount << " from " << acc << " " << (acc.withdraw_limit - acc.withdraws) << " WITHDRAWS LEFT" << std::endl;
        
        else if((acc.withdraw_limit - acc.withdraws) == 0)
            std::cout << "Failed to withdraw " << amount << " from " << acc << " (Withdrawal Limit Exceeded)"<< std::endl;
        
        else if((amount/acc.get_balance()) > 0.2)
            std::cout << "Failed to withdraw " << amount << " from " << acc << " (Amount to Withdraw Exceeds 20% of Balance)" << std::endl;
        
        else
            std::cout << "Failed to withdraw " << amount << " from " << acc << std::endl;
    } 
}