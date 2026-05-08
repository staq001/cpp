# include <iostream>
# include <memory>


// in this section we learn about the types of polymorphism which include - compile time, and runtime P.

// compile time could also mean static binding, early binding,
// and runtime could also mean early binding, dynamic binding;

// we ve demostrated so far how static binding works with the derived and base classes declared below! we allocated a Derived object to a Base object on the heap. Due to static binding, the compiler compiles the object as a Base object and therefore, uses the Base class's say_hello() method.

class Base {
  public:
    void say_hello() const {
    std::cout << "Hello! Im a base class object" << std::endl;
  };
};

class Derived :public Base{
  public:
    void say_hello() const{
      std::cout << "Hello! Im a Derived class object" << std::endl;
    }
};

void greetings(const Base &obj){
  std::cout << "Greetings: ";
  obj.say_hello();
}

int main(){
  Base b;
  b.say_hello();

  Derived d;
  d.say_hello();

  greetings(b);
  greetings(d);

  Base *b2 = new Derived();
  b2->say_hello();
  delete b2;

  std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
  ptr1->say_hello();

  return 0;
}