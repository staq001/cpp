#include <iostream>

// well, the concept of stack unwinding is that if a random function throws an exception, the compiler traces its catch block up the stack to the main function. if the next func on the main doesnt have the catch block, it moves to the next till it gets to the main. along the way, it pops off everything on its path to the main. if the main has a catch, it executes the catch, and if it doesnt, it terminates the program weirdly.

// why is this relevant? memory management! esp when dealing with pointers  (clear, right?).



void func_a();
void func_b();
void func_c();

void func_a(){
  std::cout << "Starting func_a" << std::endl;
  func_b();
  std::cout << "Ending func_a" << std::endl;
}

void func_b()
{
  std::cout << "Starting func_b" << std::endl;
  func_c();
  std::cout << "Ending func_b" << std::endl;
}

void func_c()
{
  std::cout << "Starting func_c" << std::endl;
  throw 1000;
  std::cout << "Ending func_c" << std::endl;
}

int main(){

  std::cout<< "Starting main" << std::endl;
  try{

  
  func_a();
  }catch(int &e){
    std::cout << "Caught exception: " << e << std::endl;
  }
  std::cout<< "Finishing main" << std::endl;

  return 0;
}