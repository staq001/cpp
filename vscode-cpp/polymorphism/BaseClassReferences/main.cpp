#include <iostream>


class Account {

  public:

    virtual void withdraw(double amount){

      std::cout << "Using Account withdraw method" << std::endl;
    }

    virtual ~Account(){};
};

class Trust: public Account{

  public:
    virtual void withdraw(double amount) override {
      std::cout << "Using Trust withdraw method" << std::endl;
    };
    virtual ~Trust(){};
};
class Checking: public Account{

  public:
    virtual void withdraw(double amount) override {
      std::cout << "Using Checking withdraw method" << std::endl;
    };
    virtual ~Checking(){};
};
class Savings: public Account{

  public:
    virtual void withdraw(double amount) override {
      std::cout << "Using Savings withdraw method" << std::endl;
    };
    virtual ~Savings(){};
};




void do_withdraw(Account &account, double amount){
  account.withdraw(amount);
}

int main(){

  Account a;
  Account &ref = a;
  ref.withdraw(1000); // in account::withdraw

  Trust t;
  Account &ref1 = t;
  ref1.withdraw(1000); // in trust::withdraw

  Account a1;
  Savings a2;
  Checking a3;
  Trust a4;

  do_withdraw(a1, 1000);    // in account:withdraw
  do_withdraw(a2, 1000);    // in savings:withdraw
  do_withdraw(a3, 1000);    // in checking:withdraw
  do_withdraw(a4, 1000);    // in trust:withdraw

  return 0;
}

