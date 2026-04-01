#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H

#include "Account.h"


// savings account class
// deposit methods increments amount to be deposit by amount * int_rate percentage

// so a 1000 deposit at 5% interest rate will deposit 1000 +50 = 1050;
// withdraw method does not specialize.
class Savings_Account : public Account {

  friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

  private:
    static constexpr char *def_name ="Unnamed Savings Account";
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_balance = 0.0;

  protected:
    double int_rate;

  public:
    Savings_Account();
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);

    // withdraw is inherited
};

#endif 