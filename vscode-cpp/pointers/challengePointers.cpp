#include <iostream>

// always remember a[i] = *(a+i);

using namespace std;

int *apply_all(int array1[], int size, int array2[], int size2){
  int *new_array = new int [size*size2]; // address
  int position{0};

  for (size_t i{0}; i < size2; ++i){
    for (size_t j{0}; j < size; ++j){
      new_array[position] = array1[j] * array2[i];
      // *(new_array+ position) = array1[j] * array2[i];
      ++position;
    }
  }

  return new_array;
}

void print(int arr[], int size){
  for (size_t i{0}; i < size; ++i){
    cout << arr[i] << endl;
  }
}

int main(){
  int array[]{1,2,3,4,5};
  int array2[]{10, 20, 30};

 int *result =  apply_all(array, 5, array2, 3);
 print(result, 15);

 delete[] result;
 return 0;
}