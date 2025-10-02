#include <iostream>

using namespace std;

void local_example(int);
void global_example();
void static_local_example();

int num{300};

void local_example(int x ){
  int num{1000};
  cout << "\nLocal num is: " << num << " in local_example - start" << endl;
  num = x;
  cout << "\nLocal num is: " << num << " in local_example - end" << endl;

  // num1 in main isnt within scope - so it cant be used here.
}

void global_example(){
  cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
  num *= 2;
  cout << "\nGlobal num is: " << num << " in global_example - end" << endl;}

void static_local_example(){
  static int num{5000}; // local to static_local_example - retains its value between calls;

  cout << "\nLocal static num is: " << num << " in static_local_example - end "<< endl;

  num += 1000;
  cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}

int main(){
   int num{100};
   int num1{500};

  //  cout << "Local num is : " << num << " in main" << endl;


  //  {
  //   // creates a new level of scope.
  //   int num{200}; // local to this inner block.
  //   cout << "Local num is: " << num << " in inner block of main" << endl;
  //   cout << "Inner block in main can see out - num1 is : " << num1<< endl;
  //  }

  //  cout << "Local num is: " << num << " in main" << endl;

   local_example(10);
   global_example(); // prints 300 and 600 -- global variable
   global_example(); // prints 600 and 1200
   static_local_example();
   static_local_example();
  }