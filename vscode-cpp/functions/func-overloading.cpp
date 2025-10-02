#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);


void print (int num){
  cout << "Printing int: " << num << endl;
}

void print (double num){
  cout << "Printing string: " << num << endl;
}

void print (string name){
  cout << "Printing string: " << name << endl;
}

void print (string name, string name2){
  cout << "Printing strings: " << name << " and "<< name2 <<  endl;
}

void print (vector<string> s){
  for (auto v: s) {
    cout << "Printing vector: " << v + " " << endl;
  }
  cout << endl;
}

int main(){

  print(100);
  print(123.09);
  print(123.09F); // float is promoted to double
  print('A'); // character - prints the ascii code/no of character
  print("C-style string"); // c-style string converted to c++ string

  string s{"C++ string"};
  string d{"C++ string"};
  print(s);
  print(d, s);

  print("C-style", s); // c-style and c++ string

  vector<string> stooges {"a", "b", "c", "d"};
  print(stooges);

  cout << endl;
  return 0;
}