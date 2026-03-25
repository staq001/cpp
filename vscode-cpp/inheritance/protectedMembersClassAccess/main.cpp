#include <iostream>

using namespace std;

class Base {

  public:
    int a {0};
    void display() { cout << a << " " << b << c << endl; };

  protected:
    int b{0};

  private:
    int c{0};
};

class Derived: public Base {
  // note - friends of derived have access to only what derived have access to

  // a will be public
  // b will be protected;
  // and c inherited but wont be accessible.

  public:
    void access_base_members(){
      a = 100;
      b = 200;
      // c = 300; // throws a compiler error;
    }
};

int main(){

  cout << "========= Base member access from base objects ============"<< endl;
  Base base;
  base.a = 100;  // okay
  // base.b = 100;  // compiler error;
  // base.c = 100; // compiler error;

  cout << "======Base member access from derived objects =========" << endl;

  Derived derived;
  derived.a = 100;
  // derived.b = 100; // compiler error;
  // derived.c = 100; // compiler error;

  return 0;
};