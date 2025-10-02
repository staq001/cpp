#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

// print each element in array 
// adding "const" to our int so it'd be read_only/not modify-able
void print_array(const int arr[], size_t size){
  for (size_t i{0}; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}


// set each array element to value.
void set_array(int arr[], size_t size, int value){
  for (size_t i{0}; i < size; ++i)
  {
    arr[i] = value;
  }
}

int main(){
  int my_scores[]{100, 98, 99, 86, 84};

  print_array(my_scores, 5);
  set_array(my_scores, 5, 100);
  print_array(my_scores, 5);

  cout << endl;
  return 0;
}

// NOTE
// please note that we're passing the size of the array manually because whan the array is passed in a function, the array becomes a pointer and there's no way the function knows the size of the array, only where it starts, hence the need for the maul insert of the size.

// note that in c++ 11+, an array package is included that allows for normal/seamless mainpulation etc.

// #include <array>
// void printArray(array<int, 5>& arr){
//   for (size_t i{0}; i < arr.size();++i){
//     cout << arr[i] << endl;
//   }
// }

// complicated, finfd out more before incoporating into your work;
