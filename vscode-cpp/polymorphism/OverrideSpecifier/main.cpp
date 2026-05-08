#include <iostream>

// note: if the function signature and return type arent the same, the function gets redefined as opposed to overriden. consequently, the function gets statically bound, and not dynamically bound.

// this is where the override specifier comes in. one could make a mistake when overriding functions and not know when a mistake has been made. the C++ override specifier, however, when used makes sure that the function is actually overriding not redefining.

class Base
{
public:
  virtual void say_hello() const
  {
    std::cout << "Hello from Base!" << std::endl;
  }

  virtual ~Base(){}
};

class Derived : public Base
{
public:
  virtual void say_hello() const override
  {
    std::cout << "Hello from Derived!" << std::endl;
  }

  virtual ~Derived() { }
};
int main()
{
  Base *p1 = new Base();
  p1->say_hello();

  Derived *p2 = new Derived();
  p2->say_hello();

  Base *p3 = new Derived();
  p3->say_hello();

  std::cout << "\n ==== Clean Up =====" << std::endl;
  delete p1;
  delete p2;
  delete p3;


  return 0;
}