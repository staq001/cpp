#include <iostream>

using namespace std;



class Stack {

private:
  int top;
  const int MAX_SIZE{101};
  int arr[101];

public:
  Stack() : top{-1}, arr{0} {};

  void push(int x){
    if(top==MAX_SIZE-1){
      cout << "Error:stack overflow\n";
      return;
  }
    top++;
    arr[top] = x;
  }

  void pop(){
    if(top == -1){
      cout << "Error: No element to pop\n";
    }
    arr[top] = 0;
    top--;
  }

  int topIndex(){
    return arr[top];
  }

void display(){

  for (int i{0}; i < MAX_SIZE; ++i){
    cout << arr[i] << ", ";
  }
  cout << endl;
}


};

int main(){
  Stack stack;

  stack.push(15);
  stack.push(16);
  stack.push(17);
  stack.display();

  stack.pop();
  stack.display();
  cout << stack.topIndex() << endl;
}