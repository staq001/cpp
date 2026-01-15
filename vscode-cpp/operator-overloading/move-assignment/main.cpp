#include <iostream>
#include <vector> 
#include "mystring.h"

using namespace std;

int main(){
  Mystring a {"Hello"};         // overloaded constructor
  a = Mystring {"Hola"}; // overloaded constructor then move asssignment
  a = "Bonjour";  // overloaded constructor then move assignment.

  Mystring empty;  // no args constructor
  Mystring larry{"Larry"}; // overloaded constructor
  Mystring stooge {larry}; // copy constructor
  Mystring stooges;  // no args constructor

  empty = stooge; // copy assignment constructor
                  // stooge is an l-value

  empty = "Funny"; // move assignment operator
                   // "funny" is an r-value

  empty.display();
  larry.display();
  stooge.display();
  empty.display();

  return 0;
}