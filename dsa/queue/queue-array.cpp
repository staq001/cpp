#include <iostream>

using namespace std;


class Queue {
  private:
    int a[10] {0};
    int front;
    int rear;
    int n;

  public:
    Queue() : front(-1), rear(-1), n(10) {};

    bool isEmpty() {
      if(front==-1 && rear==-1 ){
        return true;
      }
      return false;
    }

    void enqueue(int value){
      if((rear+1)%n  == front){
        cout << "Queue is full" << endl;
        return;
      }

      if (isEmpty()){
        front = rear = 0;
        a[rear] = value;
      }else {
        rear = (rear + 1) % n;
      }
      a[rear] = value;
    }

    void dequeue(){
      if (isEmpty()){
        cout << "Queue is empty" << endl;
        return;
      }else if(front==rear) {
        front = rear = -1;
      }else{
        front = (front + 1) % n;
      }
    }

    void display(){
      for (size_t i{0}; i < 10; ++i){
        cout << a[i] << " - ";
      }
      cout << endl;
    }
    
    int displayFront (){
      return a[front];
    }

};


int main(){
  Queue queue;

  queue.enqueue(4);
  queue.enqueue(5);
  queue.enqueue(7);
  queue.enqueue(7);
  queue.enqueue(7);
  queue.enqueue(7);
  queue.enqueue(7);
  queue.enqueue(8);
  queue.enqueue(8);
  queue.enqueue(10);
  queue.display();
  cout << queue.displayFront() << endl;
  queue.dequeue();
  cout << queue.displayFront() << endl;
  queue.dequeue();
  cout << queue.displayFront() << endl;
  queue.enqueue(8);
  queue.enqueue(8);
  queue.enqueue(10);
  queue.display();
  queue.enqueue(8);
}