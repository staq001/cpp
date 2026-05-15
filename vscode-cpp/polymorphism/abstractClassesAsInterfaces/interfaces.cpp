#include <iostream>

// done in header files dbut let's do it here.

class I_Printable{

  friend std::ostream &operator<<(std::ostream& os, const I_Printable& obj);

  public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
  obj.print(os);
  return os;  
}

class Account: public I_Printable{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "in account:withdraw" << std::endl;
  }

  virtual void print(std::ostream &os) const override{
    os << "Account Display";
  }

  virtual ~Account() {}
};


class Checking : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "in checking::withdraw" << std::endl;
  }

  virtual void print(std::ostream &os) const override
  {
    os << "Checking Display";
  }

  virtual ~Checking() {};
};

class Savings : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "in savings::withdraw" << std::endl;
  }

  virtual void print(std::ostream &os) const override
  {
    os << "Savings Display";
  }

  virtual ~Savings() {};
};

int main() {

  // Account a;
  // std::cout << a << std::endl;

  // Checking c;
  // std::cout << c << std::endl;

  // Savings s;
  // std::cout << s << std::endl;

  Account *p1 = new Account();
  std::cout << *p1 << std::endl;
  // no 77 automatically translates to/compiler does --- operator<<(std::ostream &os, const I_Printable&) and it continues from there.

  // and then it finds-> obj.print(os), and implements the function def. that's all!

  Account *p2 = new Checking();
  std::cout << *p2 << std::endl;
};
