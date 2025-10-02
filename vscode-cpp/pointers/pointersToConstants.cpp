#include <iostream>

using namespace std;

int main(){
  int high_score{100};
  int low_score{65};

 cout <<"Pointer to Constants" << endl;
  const int *score_ptr{&high_score};

  cout << score_ptr << endl;
  cout << *score_ptr << endl;
  // *score_ptr = 86; // not allowed
  score_ptr = &low_score; // allowed
  cout << score_ptr << endl;
  cout << *score_ptr << endl;

  // this means when a pointer is declared with the const keyword, the data cannot be manipulated, however, the addresss(where its pointing to) can. if the address is, the data automatically changes.

  cout << "\nConstants Pointers" << endl;
  int *const score_ptr2{&high_score};
  cout << score_ptr2 << endl;
  cout << *score_ptr2 << endl;

  *score_ptr2 = 86; // allowed
  // score_ptr2 = &low_score; // not allowed

  cout << score_ptr2 << endl;
  cout << *score_ptr2 << endl;
  // in pointer constants, the pointer itself cannot be changed but the data can. means the pointer is constant.

  cout << "\nConstant Pointer to Constants" << endl;
  const int *const score_ptr3{&high_score};

  // *score_ptr = 86 // error, not allowed
  // score_ptr = &low_score // error, not allowed

  // in this case, both the pointer and data cannot be modified.

  return 0;
  }