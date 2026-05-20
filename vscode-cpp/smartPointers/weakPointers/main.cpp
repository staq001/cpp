#include <iostream>
#include <memory>

using namespace std;

class B; // forward declaration

class A{
  std::shared_ptr<B> b_ptr;

  public:
    void set_B(std::shared_ptr<B> &b){
      b_ptr = b;
    }

    A() { cout << "A constructor" << endl; }
    ~A() { cout << "A destructor" << endl; }
};


class B{
  // std::shared_ptr<A> a_ptr; // make weak to break strong circular reference;

  std::weak_ptr<A> a_ptr;

  public:
    void set_A(std::shared_ptr<A> &a){
      a_ptr = a;
    }

    B() { cout << "B constructor" << endl; }
    ~B() { cout << "B destructor" << endl; }
};



int main(){

  // std::shared_ptr<A> a = make_shared<A>();
  // std::shared_ptr<B> b = make_shared<B>();
  // a->set_B(b);
  // b->set_A(a);

  // if we run this, after a & b go out of scope, the destructor wont be called, and this causes a memory leak!

  std::shared_ptr<A> a = make_shared<A>();
  std::shared_ptr<B> b = make_shared<B>();
  a->set_B(b);
  b->set_A(a);

  // the destructor gets called now, because we decided to use a weak pointer in class B. this makes sure that the variable a_ptr only points to the object and does not increase the use_cout. hence, when the object it points to go out of scope, the object is automatically destroyed.  

  return 0;
}
