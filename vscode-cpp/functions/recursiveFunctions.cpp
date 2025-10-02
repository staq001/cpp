#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long);
unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long n){
  if (n==0){
    return 1;
  }
  return n * factorial(n - 1); // recursive case.
}

unsigned long long fibonacci(unsigned long long n){
  if (n<=1){
    return n;

  }
  return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}



int main(){
  cout << fibonacci(5) << endl;
  cout << fibonacci(30) << endl;
  cout << fibonacci(40) << endl;

  cout << factorial(3) << endl;
  cout << factorial(8) << endl;
  cout << factorial(12) << endl;
  cout << factorial(40) << endl;

  return 0;
}