#include <iostream>

using namespace std;

int main(){

  int *int_ptr{nullptr};

  int_ptr = new int; // allocating memory on the heap

  // it's necessary to understand that the integer created on the heap has no name. Therefore, if we lose the pointer, we're gonna have a memory leak

  cout << int_ptr << endl;

  delete int_ptr; // deallocating the memory/freeing up.


  // Array
  size_t size{0};
  double *temp_ptr{nullptr};

  cout << "How many temps? ";
  cin >> size;

  while (true)
    temp_ptr = new double[size];

  cout << temp_ptr << endl;

  delete [] temp_ptr; // always free up the memory allocated.
  cout << endl;
  return 0;
}