#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test
{
private:
  int data;

public:
  Test() : data(0) { std::cout << "Test constructor {" << data << "}" << std::endl; }
  Test(int data) : data(data) { std::cout << "Test constructor {" << data << "}" << std::endl; }
  int get_data() const { return data; }

  ~Test() { std::cout << "Test destructor {" << data << "}" << std::endl; }
};

void my_deleter(Test *ptr){
  std::cout << "\nUsing my custom deleter" << std::endl;
  delete ptr;
}

int main()
{
  {
    // using a function;
    std::shared_ptr<Test> ptr1 { new Test(100), my_deleter
  };

  }
  
  std::cout << "======================" << std::endl;

  {
    // using a lamda expression
    std::shared_ptr<Test> ptr2{new Test(1000), [](Test *ptr){
      std::cout << "\nUsing my custom lambda deleter" << std::endl;
      delete ptr;    }};
  }


  return 0;
}