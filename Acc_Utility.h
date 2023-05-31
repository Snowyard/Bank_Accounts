#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "I_Printable.h"
#include "Account.h"
#include "Savings_account.h"
#include "Chequing_account.h"
#include "Trust_account.h"


 
// Utility helper functions for Account * class

void display(const std::vector<Account* > &accounts);

void deposit(std::vector<Account* > &accounts, double amount);

void withdraw(std::vector<Account* > &accounts, double amount);


#endif