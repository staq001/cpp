#include <iostream>

using namespace std;

class Deep{

  private:
    int *data;
  
  public:
    void set_data_value(int d) { *data = d; };
    int get_data_value() { return *data; };
    int *get_address() { return data; };

    // constructor
    Deep(int d);

    // copy constructor
    Deep(const Deep &source);

    // destructor
    ~Deep();
};

Deep::Deep(int d){
  data = new int(d);
  // *data = d;
}

// Deep::Deep(const Deep &source){
//   data = new int;
//   *data = *source.data;

//   cout << "Copy constructor - deep copy" << endl;
// } //OR 

Deep::Deep(const Deep &source):Deep(*source.data){
    cout << "Copy constructor - deep copy" << endl;

    // here, just like the one above, we are only copying the data, and not the address. hence, when we destructure, the original(copy-objcet) remains, until we run put of scope.
}

Deep::~Deep(){
  delete data;
  cout << "Destructuring, freeing data" << endl;
}

void display_data(Deep d){
  cout << d.get_data_value() << endl;
}

void display_add(Deep d){
  cout << d.get_address() << endl;
}

int main(){
  Deep object1 {20};
  display_data(object1);

  Deep obj2{object1}

  ;

  display_add(object1);
  display_add(obj2);
  obj2.set_data_value(1000);

  display_data(object1);
  display_data(obj2);

  cout << endl;
  return 0;
}