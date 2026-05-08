#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <string>
#include "Account.h"

class Checking_Account: public Account {
  friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);

private:
  static constexpr const double withdrawal_fee = 1.5;
  static constexpr const char *def_name = "Unnamed account";
  static constexpr const double def_balance = 0.0;

public:
  Checking_Account(std::string name = def_name, double balance = def_balance);
  bool withdraw(double amount, double fee = withdrawal_fee);
  bool operator+=(double amount);
  bool operator-=(double amount);
};

#endif