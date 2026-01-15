#include <iostream>
#include <vector> 
#include "mystring.h"

using namespace std;

int main(){
  cout << boolalpha << endl;

  Mystring a{"Larry"};
  Mystring b = a;

  std::cout << (a == b) << std::endl;  // true
  std::cout << (a != b) << std::endl;   // false

  b = "george";
  cout << (a == b) << endl;      // false
  cout << (a != b) << endl;      // true
  cout << (a < b) << endl;       // true
  cout << (a > b) << endl;       // false


  Mystring s1{"Frank"};
  s1 = -s1;
  cout << s1 << endl;        //frank

  s1 = s1 + "******";       //frank*******
  std::cout << s1 << std::endl;


  s1 += "*****";            //frank***********
  std::cout << s1 << std::endl;

  Mystring s2{"12345"};
  s2 = s2 * 3;
  cout << s2 << endl;      //123451234512345

  Mystring s3{"abcedf"};
  s3 *= 5;
  cout << s3 << endl;   //abcedfabcedfabcedfabcedfabcedf

  Mystring s = "frank";
  ++s;
  cout << s << endl;  // FRANK

  s = -s;
  cout << s << endl;  // frank

  Mystring result;
  result = ++s;
  cout << s << endl;     // FRANK
  cout << result << endl;       // FRANK

  s = "Frank";
  cout << s << endl; // Frank
  s++;
  cout << s << endl; // FRANK

  s = -s;
  cout << s << endl;
  result = s++;           // frank
  cout << result << endl;  // FRANK

  cout << "___________" << endl;
  s = --s;
  cout << s << endl;
  cout << s++ << endl;
  cout << s-- << endl;

  return 0;
}