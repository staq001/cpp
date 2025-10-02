#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

class LinkedList {
  private:
    Node *head;

  public:
    LinkedList(){
      head = nullptr;
    }

  // insert at the end.
  void append(int value){
    Node *newNode = new Node(value);
    if(!head){
      head = newNode;
      return;
    }

    Node *temp = head;
    while((*temp).next){
      temp = (*temp).next;
    } // terminates when temp->next = nullptr
    (*temp).next = newNode;
  }

  // insert at nth position
  void insert(int value, int position){
    Node *newNode = new Node(value);
    if (position == 0){
      newNode->next = head;
      head = newNode;
      return;
    }

    int count = 0;

    Node *temp = head;
    while(temp!=nullptr && count < position-1){
      temp = temp->next;
      ++count;
    }

    if (temp ==nullptr){
      throw std::out_of_range("Index out of bounds");
    }

    newNode->next = temp->next;
    temp->next = newNode;
  }

  // insert at the beginning.
  void prepend(int value){
    Node *newNode = new Node(value);
    (*newNode).next = head;
    head = newNode;
  }

  void deleteNodeAt(int position){
    if (position == 0){
      Node *temp = head;
      head = head->next;
      delete temp;
      return;
    }

    int count{0};
    Node *current = head;
    while (current !=nullptr && count < position -1){
      current = current->next;
      ++count;
    }

    Node *temp = current->next;
    current->next = temp->next;

    delete temp;
  }

  void deleteNode(int value){
    if(!head) 
      return;
    if (head-> data ==value){ // checks if the first node contains the value.
      Node *temp = head;
      head = head -> next;
      delete temp;
      return;
    }

    Node *current = head;
    while(current->next &&current->next->data!= value){
      current = current->next;
    }

    if(current-> next){
      Node *temp = current->next;
      current->next = temp->next;
      delete temp;
    }
  }

  void reverse(){
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while(current!=nullptr){
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
  }

  void reverseRecursion(){
    head = reverseRecursive(head);
  }

// reverse list w recursion
Node * reverseRecursive(Node* node){
  if (node == nullptr || node->next==nullptr){
    return node;
  }

  Node *newHead = reverseRecursive(node->next);

  node->next->next = node;
  node->next = nullptr;

  return newHead;
}

  // display list
  void display() const {
    Node *temp = head;
    while(temp){
      cout << temp->data << " -> ";
      temp = temp->next;
    }
    cout << "nullptr" << endl;
  }


  void printRecursive(Node *node){
    if (node ==nullptr){
      return;
    }

    cout << node->data << " -> ";
    printRecursive(node->next);

  }

  void printRecursion(){
    printRecursive(head);
  }
  // destructor to free memory
  ~LinkedList(){
    Node *current = head;
    while(current){
      Node *nextNode = current->next;
      delete current;
      current = nextNode;
    }
  }
};

int main(){
  
  // Node *temp = new Node(5);

  // Node *temp1 = new Node(6);
  // (*temp).next = temp1;

  // cout << (*temp).data << endl;
  // cout << (*temp).next << endl;
  // cout << (*temp1).data << endl;
  // cout << (*temp1).next << endl;

  // while(temp){
  //   cout << temp->data << "->";
  //   temp = temp->next;
  // }

  LinkedList list;
  list.append(10);
  list.append(20);
  list.append(30);
  list.display();


  list.insert(5, 3);
  // list.insert(6, 2);
  // list.insert(10, 1);
  list.display();
  list.deleteNodeAt(1);
  list.display();
  list.reverse();
  list.display();
  list.reverseRecursion();
  list.display();
  cout << "____________" << endl;

  list.printRecursion();
  // list.deleteNode(20);
  // list.display();

  return 0;
}