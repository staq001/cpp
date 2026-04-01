#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>

class Account {
  friend std::ostream &operator<<(std::ostream &os ,const Account &account);

  private:
    static constexpr char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    
  protected:
    double balance;
    std::string name;

  public:
    Account();
    Account(std::string name=default_name, double balance=default_balance);

    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance()const;
};

#endif // _ACCOUNT_H_