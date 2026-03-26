#include <iostream>

using namespace std;

class Base {

  private:
    int value;

  public:
    Base(): value{0} {cout << "no-args constructor" << endl;}
    Base(int x) : value(x) { cout << "Base (int) constructor" << endl; }
    ~Base() { cout << "Base Destructor" << endl; }


    void display_value()
    {
        cout << "Value: " << value << endl;
    }
};

class Derived:public Base {

  private:
    int doubled_value;
  public:
    Derived() : Base(), doubled_value{0} { cout << "Derived no-args constructor" << endl; }
    Derived(int x) : Base(x), doubled_value{ x*2} { cout << "Derived (int) constructor" << endl; }
    ~Derived(){
      cout << "Derived destructor" << endl;
    }

    void display_value()
    {
        Base::display_value();
        cout << "Doubled Value: " << doubled_value << endl;
    }
};

int main(){

  // Derived d;
  Derived d{1000};

  d.display_value();
  return 0;
}