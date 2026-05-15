#include <iostream>
#include <vector>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main(){
  cout.precision(2);
  cout << fixed;


  // // Accounts
  // vector<Account> accounts;
  // accounts.push_back(Account{});
  // accounts.push_back(Account{"Larry"});
  // accounts.push_back(Account{"Moe", 2000});
  // accounts.push_back(Account{"Curly", 5000});

  // display(accounts);
  // deposit(accounts, 1000);
  // withdraw(accounts, 2000);


  // Savings Account
  vector<Account*> sav_accounts;
  sav_accounts.push_back(new Savings_Account{});
  sav_accounts.push_back(new Savings_Account{"Superman"});
  sav_accounts.push_back(new Savings_Account{"Batman", 2000});
  sav_accounts.push_back(new Savings_Account{"Wonderwoman", 5000, 5.0});

  display(sav_accounts);

  // Checking Account
  vector<Account*> check_accounts;
  check_accounts.push_back(new Checking_Account{});
  check_accounts.push_back( new Checking_Account{"Superman"});
  check_accounts.push_back(new Checking_Account{"Batman", 2000});
  check_accounts.push_back(new Checking_Account{"Wonderwoman", 5000});

  display(check_accounts);
  deposit(check_accounts, 1000);
  withdraw(check_accounts, 2000);

  // Checking_Account check_account{"John Doe", 1000.0};
  // check_account+=500.0;
  // cout << check_account.get_balance() << endl;

  // check_account-=500.0;
  // cout << check_account.get_balance() << endl;


  // Trust Account
  vector<Account *> trust_accounts;
  trust_accounts.push_back(new Trust_Account{});
  trust_accounts.push_back(new Trust_Account{"Superman"});
  trust_accounts.push_back(new Trust_Account{"Batman", 2000});
  trust_accounts.push_back(new Trust_Account{"Wonderwoman", 5000, 5.0});

  display(trust_accounts);
  deposit(trust_accounts, 1000);
  withdraw(trust_accounts, 2000);

  // Trust_Account trust_account{"John Doe", 1000.0};
  // trust_account += 500.0;
  // cout << trust_account.get_balance() << endl;

  // trust_account -= 500.0;
  // cout << trust_account.get_balance() << endl;

  // return 0;
}