// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_account.h"
#include "Chequing_account.h"
#include "Trust_account.h"
#include "Acc_Utility.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;

    Checking_Account c;
    cout << c << endl; 
    
    Savings_account Frank {"Frank", 5000, 2.0};
    cout << Frank << endl;

    Account *ptr = new Trust_Account("Neo", 20, 2.3);
    cout << *ptr << endl;
    
    return 0;
}