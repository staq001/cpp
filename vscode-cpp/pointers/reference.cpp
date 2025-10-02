#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){

  int num{100};
  int &ref{num}; // basically beehind the scenes, its a pointer.

  cout << &num << endl;
  cout << &ref << endl;
  cout << num << endl;
  cout << ref << endl; // deferenced for us automatically.

  num = 200;
  cout << "\n__________________________________" << endl;
  cout << num << endl;
  cout << ref << endl;

  ref = 300;
  cout << "\n__________________________________" << endl;
  cout << num << endl;
  cout << ref << endl;


    vector<string> stooges{"Mary", "Larry", "Curly"};

    cout << "\n__________________________________" << endl;
  for (auto s: stooges){
    s = "Funny";
    // copy is modified and printed, doesnt leave this block
  }

  for (auto s: stooges){
    cout << s << endl; // no change
  }

  cout << "\n__________________________________" << endl;
  for (auto &s: stooges){
    s = "Funny"; // str is a reference to each vector element. 
  }

  for (auto const s: stooges){ // const
    cout << s << endl; // now the vector elements have changed.
  }

  int *ptr{&num};
  int &ref1{*ptr};

  cout << ptr << endl;
  cout << &ref1 << endl;
  cout << *ptr << endl;
  cout << ref1 << endl;

  cout << endl;
  return 0;
}