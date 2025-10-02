#include <iostream>
#include <cstring>
#include <stack> // stack from standard template library (stl)

using namespace std;

// class Stack{
//   private:
//     char A[101];
//     int top;
//   public:
//     void Push(int x);
//     void Pop();
//     int Top();
//     bool isEmpty();
// };

void Reverse(char *C, int n){
  stack<char> S;

  // loop for push
  for (size_t i{0}; i < n; i++){
    S.push(C[i]);
  }

  // loop for pop
  for (size_t i{0}; i < n; i++){
    C[i] = S.top(); // overwrite character at index i;
    S.pop(); // perform pop operation
  }


}

int main(){
  char C[51];
  // char answer[100];

  cout << "Enter a string: ";

  cin.getline(C, 51);

  Reverse(C, strlen(C));
  cout << "Output: " << C << endl;
}

