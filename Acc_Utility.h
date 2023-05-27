#pragma once
#include "Account.h"
#include "Savings_account.h"
#include "Chequing_account.h"
#include "Trust_account.h"
#include <vector>

//Utility helper for Account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);


//Utility helper for Savings_account class
void display(const std::vector<Savings_account> &accounts);
void deposit(std::vector<Savings_account> &accounts, double amount);
void withdraw(std::vector<Savings_account> &accounts, double amount);


//Utility helper for Chequing_account class
void display(const std::vector<Chequing_account> &accounts);
void deposit(std::vector<Chequing_account> &accounts, double amount);
void withdraw(std::vector<Chequing_account> &accounts, double amount);


//Utility helper for Trust_account class
void display(const std::vector<Trust_account> &accounts);
void deposit(std::vector<Trust_account> &accounts, double amount);
void withdraw(std::vector<Trust_account> &accounts, double amount);