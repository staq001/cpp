#include <iostream>

using namespace std;

// void swapPointers(int*ptr1, int*ptr2){
//   int *swap1{nullptr};
//   int *swap2{nullptr};

//   cout << ptr1 << endl;
//   cout << ptr2 << endl;

//   swap1 = ptr1;
//   swap2 = ptr2;

//   ptr1 = swap2;
//   ptr2 = swap1;

//   cout << ptr1 << endl;
//   cout << ptr2<< endl;

// }

int main(){
  // increment operator(++) a pointer to point to the next array element; 
  // decrement operator(--) a pointer to point to the next array element; 

  // (+) increment pointer by n * sizeof(type)
  // means when you do an addition operation, c++ in the background does this (* sizeof(type)) for you. 
  // (-) decrement pointer by n * sizeof(type)
  // goes for this as well.
  int scores[]{200, 95, 89, 68, -1};
  int *score_ptr{scores};

  while(*score_ptr!=-1){
    cout << *score_ptr << endl;
    score_ptr++; // incrementing the addresses.
  }

  cout << "\n----------------------------------" << endl;
  score_ptr = scores;
  while(*score_ptr != -1){
    cout << *score_ptr++ << endl; // dereference and incrementing.
  }

  cout << "\n----------------------------------" << endl;
  string s1 {"Frank"};
  string s2{"Frank"};
  string s3{"James"};

  string *p1{&s1};
  string *p2{&s2};
  string *p3{&s1};

  cout << boolalpha;
  cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;
  cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;

  cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;

  p3 = &s3;
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;



  cout << "\n----------------------------------" << endl;
  char name[]{"Frank"};
  char *char_ptr1{nullptr};
  char *char_ptr2{nullptr};

  char_ptr1 = &name[0]; // F
  char_ptr2 = &name[3]; // n

  cout << "in the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

  cout << "\n"
       << char_ptr2 << endl;
  cout << char_ptr1;
  cout << "\n"
       << *char_ptr2 << endl;
  cout << *char_ptr1;

  // int a{5};
  // int b{10};

  // int *a_ptr{&a};
  // int *b_ptr{&b};

  // swapPointers(a_ptr, b_ptr);

 cout << endl;
 return 0;
}