#include <iostream>
#include <vector> 
#include "mystring.h"

using namespace std;

int main(){
  Mystring a {"Hello"};         // overloaded constructor
  Mystring b;                   // no args constructor
  b = a;                      // copy assignment
                              // b.operator={a}
  b = "This is a test";       // b.operator={"This is a test"}

  std::cout << b.get_str() << std::endl;



  return 0;
}