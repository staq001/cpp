#include <iostream>

using namespace std;

void reverse_array(int *arr, int size){

  int a = 0;
  int b = size - 1;


  while(a<b){

    int temp {};
    temp = arr[a];
    arr[a] = arr[b];

    arr[b] = temp;

    a++;
    b--;
  }
}

void print(int *arr, int size){

  for (size_t i{0}; i < size; ++i){
    cout << arr[i] << ",";
  }
  cout << endl;
}


int main(){

  int array[5]{1, 2, 7, 4, 10};

  reverse_array(array, 5);

  print(array, 5);

  return 0;
}