#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <string>
#include "Account.h"

class Checking_Account: public Account {

private:
  static constexpr const double withdrawal_fee = 1.5;
  static constexpr const char *def_name = "Unnamed account";
  static constexpr const double def_balance = 0.0;

public:
  Checking_Account(std::string name = def_name, double balance = def_balance);

  virtual bool withdraw(double amount) override;
  virtual bool deposit(double amount) override;
  virtual double get_balance() const override;
  virtual void print(std::ostream &os)const override;
  bool operator+=(double amount);
  bool operator-=(double amount);

  virtual ~Checking_Account() = default;
};

#endif