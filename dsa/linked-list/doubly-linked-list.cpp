#include <iostream>

using namespace std;


struct Node {
  int data;
  Node *next;
  Node *prev;

  Node(int value) : data(value), next(nullptr), prev(nullptr){}
};


class DoublyLinkedList {
  private:
    Node *head;
    Node *tail;

  public:
    DoublyLinkedList(): head(nullptr), tail(nullptr){}


  void append(int value){
    Node *newNode = new Node(value);

    if (!head){
      head = tail = newNode;
      return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }

  void prepend(int value){
    Node *newNode = new Node(value);

    if (!head){
      head = tail = newNode;
      return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }

  void deleteValue(int value){
    if(!head)
      return;

    Node *current = head;

    while(current && current->data!=value)
      current = current->next;

    if(!current)
      return; // not found

    if (current == head)
        head = head->next;

    if (current==tail)
      tail = tail->prev;

    if (current->prev)
      current->prev->next = current->next;

    if (current->next)
      current->next->prev = current->prev;

    delete current;
  }

  void printForward()const{
    Node *current = head;
    while(current){
      cout << current->data << " -> ";
      current = current->next;
    }
    cout << "nullptr\n";
  }

  void printBackward()const{
    Node *current = tail;
    while(current){
      cout << current->data << " <- ";
      current = current->prev;
    }
    cout << "nullptr\n";
  }

  int length()const {
    int count = 0;
    Node *current = head;
    while(current){
      count++;
      current = current->next;
    }
    return count;
  }

    // destructor to clean up memory.
  ~DoublyLinkedList(){
    Node *current = head;
    while(current){
      Node *nextNode = current->next;
      delete current;
      current = nextNode;
    }
  }
};


int main(){
  DoublyLinkedList list;

  list.append(10);
  list.append(20);
  list.append(30);

  list.prepend(5);
  list.prepend(10);
  list.printForward();
  list.printBackward();

  list.deleteValue(10);
  list.printForward();

  cout << list.length() << endl;

  return 0;
}