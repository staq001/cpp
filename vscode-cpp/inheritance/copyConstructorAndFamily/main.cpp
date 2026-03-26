#include <iostream>

using namespace std;

class Base
{

private:
  int value;

public:
  Base() : value{0} { cout << "no-args constructor" << endl; }
  Base(int x) : value(x) { cout << "Base (int) constructor" << endl; }
  ~Base() { cout << "Base Destructor" << endl; }


  Base(const Base &other): value(other.value){cout << "Base copy constructor" << endl;}

  // copy assignment
  Base &operator=(const Base &rhs){
    cout << "Base copy assignment operator" << endl;
    if (this != &rhs)
      value = rhs.value;
      return *this;

    return *this;
  }
};

class Derived : public Base
{

private:
  int doubled_value;

public:
  Derived() : Base(), doubled_value{0} { cout << "Derived no-args constructor" << endl; }
  Derived(int x) : Base(x), doubled_value{x * 2} { cout << "Derived (int) constructor" << endl; }
  ~Derived()
  {
    cout << "Derived destructor" << endl;
  }

  Derived(const Derived &other) : Base(other), doubled_value(other.doubled_value) { cout << "Derived copy constructor" << endl; }

  // copy assignment;
  Derived &operator=(const Derived &rhs){
    cout << "Derived copy assignment operator" << endl;
    if(this == &rhs)
      return *this;

    Base::operator=(rhs);
    doubled_value = rhs.doubled_value;
    return *this;
  }
};

int main()
{
  // Base b{100}; // overloaded constructor
  // Base b1{b};  // copy constructor
  // b = b1;     // copy assignment;

  Derived d{100}; // overloaded constructor
  Derived d1{d};  // copy constructor
  d = d1; // copy assignment;
  return 0;
}