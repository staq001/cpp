#include <iostream>

using namespace std;



// dont ever do these 
// int *dont_do_this(){
//   int size{};
//   return &size; // Never return a pointer to a local function variable
// }

// int *or_this(){
//   int size{};
//   int *int_ptr{&size};

//   return int_ptr; // bad practice-- Never return a pointer to a local function variable
// };
///////////////////////////



int *create_array(size_t size, int init_value=0){
  int *new_storage{nullptr};

  new_storage = new int[size];
  for (size_t i{0}; i < size; ++i){
    *(new_storage+i) = init_value;
    // new_storage[i]= init_value; // same thing.
  }
  return new_storage;
}

void display(const int *const array, size_t size){
  for (size_t i{0}; i < size; ++i)
    cout << array[i] << " ";
  cout << endl;
}



int main(){
  int *my_array{nullptr};
  size_t size;
  int init_value{};

  cout << "\nHow many integers would you like to allocate? ";
  cin >> size;
  
  cout << "What would you like them to be initialized to? ";
  cin >> init_value;

  my_array = create_array(size, init_value);
  cout << "\n____________________________________________" << endl;

  display(my_array, size);

  delete[] my_array; // always remember to delete dynamically created memory after use.
    return 0;
}