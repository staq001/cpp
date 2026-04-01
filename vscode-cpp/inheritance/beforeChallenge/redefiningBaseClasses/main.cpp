#include <iostream>
#include "Savings_Account.h"


using namespace std;

int main()
{
  // cout << "\n===== Account class =================" << endl;
  // Account a1{1000.0};
  // cout << a1 << endl;

  // a1.deposit(500.0);
  // cout << a1 << endl;

  // a1.withdraw(1000.0);
  // cout << a1 << endl;

  // a1.withdraw(1000.0); // insufficient funds
  // cout << a1 << endl;  // account balance: 500;

  cout << "\n=====Saving Account class =================" << endl;
  Savings_Account s1{1000.0, 5.0};
  cout << s1 << endl;

  s1.deposit(500.0);
  cout << s1 << endl;

  s1.withdraw(1000.0);
  cout << s1 << endl;

  s1.withdraw(1000.0); // insufficient funds
  cout << s1 << endl;  // saving account balance: 500, interest rate: 5.0;

  return 0;
}