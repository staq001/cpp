#include <iostream>

using namespace std;

int main(){

  int scores[]{100, 23, 30};

  cout << scores << endl;
  cout << *scores << endl;

  int * score_ptr{scores};
  cout << score_ptr << endl; // returns address of first element.

  cout << "\nPointer Subscript Notation" << endl;
  cout << score_ptr[0] << endl; // returns 100, 23, 20 as
  cout << score_ptr[1] << endl; // in the array
  cout << score_ptr[2] << endl; // subscript
  
  cout << "\nAddresses of elements in the array/pointer" << endl;
  cout << (score_ptr ) << endl; // returns address of 1 -
  cout << (score_ptr + 1) << endl; // 3 element each
  cout << (score_ptr + 2) << endl;
  // it increased by 4 as we're not adding 1 to the pointer value, we're adding the size of the 1 integer(type) to the pointer value, which is 4bytes.

  cout << "\nPointer Offset Notation" << endl;
  cout << *score_ptr  << endl; // defererncin the pointer
  cout << *(score_ptr + 1) << endl; // should return the
  cout << *(score_ptr + 2) << endl; // value of each.

  cout << "\narray Offset Notation" << endl;
  cout << *scores << endl; // defererncin the pointer
  cout << *(scores + 1) << endl; // should return the
  cout << *(scores + 2) << endl; // value of each.
}