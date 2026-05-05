#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H

#include "Savings_Account.h"
#include <string>
#include <ostream>



class Trust_Account: public Savings_Account{

  friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

  private:
    static constexpr const char *def_name = "Unnamed trust account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;

  protected:
    int noOfWithdrawals{0};

  public:
    Trust_Account(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate);

    bool deposit(double amount);
    bool withdraw(double amount);

    bool operator+=(double amount);
    bool operator-=(double amount);
};

#endif