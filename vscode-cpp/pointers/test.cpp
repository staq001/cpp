#include <iostream>

using namespace std;
int find_max_element(int *arr, int size);

int find_max_element(int *arr, int size){

  int max_element{};

  max_element = *(arr);
  for (size_t i{0}; i < size; ++i){
    if (max_element < *(arr+i)){
      max_element = *(arr+i);
    }
  }
  return max_element;
}

void display(int *arr,int size){
  for (size_t i{0}; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverse_array(int *arr, int size){
  int start = 0;
  int end = size - 1;

  while( start< end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start += 1;
    end -= 1;
  }
}

string reverse_string(const string &str){
  string reversed;
  const string *str_ptr{&str};
  reversed = *str_ptr;

  int start{0};
  int end = str.size() - 1; // didnt know there was a size method lmao.

  // for (auto s: reversed){
  //   end++;
  // }
  // end -= 1;

  while (start < end){
    char temp = str[start];
    reversed[start] = reversed[end];
    reversed[end] = temp;

    start += 1;
    end -= 1;
  }
  return reversed;
}

int main(){
  int my_array[5]{23, 4540, 430, 458, 560};
  string name{"Multi Choice Bankers!"};

  int max_element = find_max_element(my_array, 5);
  

  cout << max_element << endl;
  reverse_array(my_array, 5);
  display(my_array, 5);
  string new_string = reverse_string(name);
  cout << new_string << endl;

  return 0;

  
}