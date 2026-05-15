#include <iostream>



// the reason why we have duplicate os stream functions in the base and derived classes is because friend methods are not inherited. 

class Account {
  friend std::ostream &operator<<(std::ostream &os, const Account &acc);

  public:
    virtual void withdraw(double amount){
      std::cout << "in account:withdraw" << std::endl;
    }

    virtual ~Account(){}
};

std::ostream &operator<<(std::ostream &os, const Account &acc){
  os << "Account Display";
  return os;
}

class Checking:public Account{
  friend std::ostream &operator<<(std::ostream &os, const Checking &acc);

  public:
    virtual void withdraw(double amount){
      std::cout << "in checking::withdraw" << std::endl;
    }

    virtual ~Checking(){};
};

std::ostream &operator<<(std::ostream &os, const Checking &acc){
  os << "Checking Display";
  return os;
}


class Savings:public Account{
  friend std::ostream &operator<<(std::ostream &os, const Savings &acc);

  public:
    virtual void withdraw(double amount){
      std::cout << "in savings::withdraw" << std::endl;
    }

    virtual ~Savings(){};
};

std::ostream &operator<<(std::ostream &os, const Savings &acc){
  os << "Savings Display";
  return os;
}


int main(){

  // Account a;
  // std::cout << a << std::endl;

  // Checking c;
  // std::cout << c << std::endl;

  // Savings s;
  // std::cout << s << std::endl;
  // all three work as they should.

  // -------------------------------
  Account *p1 = new Account();
  std::cout << *p1 << std::endl;

  Account *p2 = new Checking();
  std::cout << *p2 << std::endl;
  // however, these two don't. these are bound statically, as opposed to dynamically!! why?? because there is no virtual function that is being called.
  }
