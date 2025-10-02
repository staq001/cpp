#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int value): data(value), next(nullptr){}
};


class Stack{

  private:
    Node *top;


  public:
    Stack() :top(nullptr) {};


  void push(int value){
    Node *newNode = new Node(value);

    // setting top to new node.
    newNode->next = top;
    top = newNode;

  }

  void pop(){
    if (!top)
      return;
    Node *temp = top;
    top = top->next;

    delete temp;
  }

  Node * Top(){
    return top;
  }

  void displayTop(){
    cout << top->data << endl;
  }

    ~Stack(){
      Node *current = top;
      while(current){
        Node *nextNode = current->next;
        delete current;
        current = nextNode;
      }
    }
};

int main(){

  Stack stack;
  stack.push(10);
  stack.push(30);
  stack.push(50);
  stack.displayTop();
  stack.pop();
  stack.displayTop();
  stack.pop();
  stack.displayTop();
}