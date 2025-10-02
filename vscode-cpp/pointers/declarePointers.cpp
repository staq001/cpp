#include <iostream>

using namespace std;

int main(){

  //int *int_ptr; // is the same as int* int_ptr. also, always initailize your pointers, as uninitialized pointers contain garbage data and can point anywhere.
  int *int_ptr{nullptr};

  int a{10};
  int* p  = &a;

  cout << a << endl;
  cout << &a << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << nullptr << endl;

  *p = 20;
  cout << a << endl;
  cout << &p << endl;

  return 0;
}