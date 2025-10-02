#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int value) : data(value), next(nullptr) {};
};

class Queue{
  private:
    Node *head;
    Node *rear;

  public:
    Queue() : head(nullptr), rear(nullptr) {};


  void enqueue(int value){
    Node* newNode = new Node(value);
    if(!head){
      head = rear = newNode;
      return;
    }

    // Node *temp = head;
    // while(temp->next){
    //   temp = temp->next;
    // }
    // temp->next = newNode; O(n)

    Node *temp = rear;
    temp->next = newNode;    // O(1)
    rear = newNode;
  }


  void dequeue(){
    if (!head){
      cout << "Queue is empty" << endl;
      return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
  }

  int front(){
    Node *temp = head;
    return temp->data;
  }

  int back(){
    Node *temp = rear;
    return temp->data;
  }

  void display(){
    if (!head) {
      cout << "Queue is empty" << endl;
      return;
    }

    Node *temp = head;
    while(temp){
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << endl;
  }

  void displayFront(){
    cout << front() << endl;
  }

  void displayBack(){
    cout << back() << endl;
  }

};

int main (){
  Queue queue;

  queue.enqueue(23);
  queue.enqueue(26);
  queue.enqueue(28);
  queue.enqueue(30);
  queue.display();

  cout << "________" << endl;
  queue.dequeue();
  queue.display();

  queue.displayFront();
  queue.displayBack();
  return 0;
}