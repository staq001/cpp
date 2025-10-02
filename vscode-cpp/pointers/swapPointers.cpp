#include <iostream>

using namespace std;


void swap_pointers(int* ptr1, int* ptr2) {
  if (ptr1 != ptr2) {  // Optional: avoid zeroing out the same location
      *ptr1 = *ptr1 + *ptr2; //(a+b)
      *ptr2 = *ptr1 - *ptr2; // (a+b -b =a)
      *ptr1 = *ptr1 - *ptr2; // (a-+b -a =b)
  }
}

int main() {
  int a = 5;
  int b = 10;

  int* ptrA = &a;
  int* ptrB = &b;

  swap_pointers(ptrA, ptrB);

  std::cout << "a = " << a << ", b = " << b << std::endl;
  // Output: a = 10, b = 5

  return 0;
}
