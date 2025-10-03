#include <iostream> 

using namespace std;

class Shallow {

  private:
    int *data;
  public:
    void set_data_value(int d) { *data = d; };
    int get_data_value() { return *data; }

    //Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);

    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
  data = new int;
  *data = d;
}

Shallow::Shallow(const Shallow &source):data(source.data){
  cout << "Copy Constructor - shallow copy "<< endl;
}

Shallow::~Shallow(){
  delete data;
  cout << "Destructor freeing data " << endl;
}

void display_shallow(Shallow s){
  cout << s.get_data_value() << endl;
}

int main(){
  Shallow obj1 {100};
  Shallow obj2 {100};
  obj1.set_data_value(5);

  display_shallow(obj2);
  cout <<"Finished" <<endl;

  // there's an obvious issue w shallow copies. every copy(esp when dealing w pointers) takes the exact address of the copy-object, and that obviously causes an issue when destructuring(when freeing data of the copy, you automatically free the copy-object in the heap, causing the copy-object to point to invalid data), causing a crash. PS always use a deep copy.
}