#include <iostream>
#include <vector> 
#include "mystring.h"

using namespace std;

int main(){
  std::cout << boolalpha << std::endl;

  Mystring larry{"Larry"};
  larry.display();       // Larry

  Mystring stooge = -larry;
  stooge.display();


  Mystring moe{"Moe"};

  larry.display();       // Larry
  moe.display();     // Moe

  std::cout << (larry == moe) << std::endl;     // false
  std::cout << (larry == stooge) << std::endl;     // true

  larry.display();              // Larry
  Mystring larry2 = -larry;
  larry2.display();                 // larry

  Mystring stooges = larry + "Moe";
  // Mystring stooges = "Moe" + larry;    // compiler error. lvalue operand is not a member of the class.

  Mystring two_stooges = moe + " " + "Larry";
  two_stooges.display();

  Mystring three_stooges = moe + " " + larry + " " + "curly";
  three_stooges.display();

  return 0;
}