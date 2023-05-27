#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_account.h"
#include "Chequing_account.h"
#include "Trust_account.h"
#include "Acc_Utility.h"

using namespace std;

int main() {
    
    // Accounts (Base Class)
    vector<Account> accounts {};
    
    accounts.push_back(Account{});
    accounts.push_back(Account{"Superman"});
    accounts.push_back(Account{"Batman", 1000});
    accounts.push_back(Account{"Wonderwoman", 2000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 1500);
    
    // Savings Accounts 
    // - Deposited Funds get boosted with an interest rate
    vector<Savings_account> sav_accounts {};
    
    sav_accounts.push_back(Savings_account{});
    sav_accounts.push_back(Savings_account{"Moe"});
    sav_accounts.push_back(Savings_account{"Curly", 1000});
    sav_accounts.push_back(Savings_account{"Trump", 1500, 2.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 500);
    withdraw(sav_accounts, 1999);
    
    // Chequing Accounts
    // - A fee of $1.50 is incurred upon the user's withdrawal
    vector<Chequing_account> cheq_accounts {};
    
    cheq_accounts.push_back(Chequing_account{});
    cheq_accounts.push_back(Chequing_account{"Venom"});
    cheq_accounts.push_back(Chequing_account{"Doctor Octopus", 500});
    display(cheq_accounts);
    deposit(cheq_accounts, 300);
    withdraw(cheq_accounts, 500);
    
    // Trusts Accounts
    // - Each user is entitled only to a maximum of 3 withdrawals
    // - A withdrawal cannot exceed 20% of the user's balance
    // - Deposits over $5000 will get a $50 bonus
    vector<Trust_account> Trust_accounts {};
    
    Trust_accounts.push_back(Trust_account{});
    Trust_accounts.push_back(Trust_account{"Jeff"});
    Trust_accounts.push_back(Trust_account{"Fred", 500});
    Trust_accounts.push_back(Trust_account{"Nick", 500, 3});
    display(Trust_accounts);
    deposit(Trust_accounts, 300);
    withdraw(Trust_accounts, 100);
    withdraw(Trust_accounts, 100);
    withdraw(Trust_accounts, 100);
    withdraw(Trust_accounts, 100);
    deposit(Trust_accounts, 5001);
    
     
    return 0;
}
 