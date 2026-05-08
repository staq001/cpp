#include <iostream>
#include <vector>

// this class uses dynamic polymorphism for the withdraw method.

// we use the virtual key word to activate the dynamic binding in the withdraw method. we also add the virtual keyword to the other Derived classes but they arent necessary. it would work otherwise!


// note: whenever you have virtual functions, you need to have virtual destructors. 

class Account {
  public:
    virtual void withdraw(double amount){
      std::cout << "In Acount:withdraw" << std::endl;
    }
};

class Checking:public Account {
  public:
    virtual void withdraw(double amount)
    {
      std::cout << "In Checking:withdraw" << std::endl;
    }
};
class Trust:public Account {
  public:
    virtual void withdraw(double amount)
    {
      std::cout << "In Trust:withdraw" << std::endl;
    }
};
class Savings:public Account {
  public:
    virtual void withdraw(double amount)
    {
      std::cout << "In Savings:withdraw" << std::endl;
    }
};

int main()
{
  std::cout << "\n ==== Pointers === " << std::endl;
  Account *p1 = new Account();
  Account *p2 = new Savings();
  Account *p3 = new Trust();
  Account *p4 = new Checking();

  p1->withdraw(1000);
  p2->withdraw(1000);
  p3->withdraw(1000);
  p4->withdraw(1000);

  std::cout << "\n ==== Array =====" << std::endl;
  Account *array[] = {p1, p2, p3, p4};

  for (auto i = 0; i < 4;i++){
    array[i]->withdraw(1000);
  }

  std::cout << "\n ===== Vector =====" << std::endl;
  std::vector<Account *> accounts{p1, p2, p3, p4};

  for (auto acc:accounts){
    acc->withdraw(1000);
  }

  std::cout << "\n ===== Clean Up =====" << std::endl;

  delete p1;
  delete p2;
  delete p3;
  delete p4;

  return 0;
}