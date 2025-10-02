#include <iostream>
#include <string>

using namespace std;


int main(){

  // string s1; // empty
  // string s2{"Frank"}; // initialized with a string literal
  // string s3{s2}; // Frank
  // string s4{"Frank", 3}; // Fra, first 3 characters of Frank
  // string s5(10, 'A'); // AAAAAAAAAA, 10 times 'A'
  // string s6 {s3, 0, 3}; // Fra, first 3 characters of s3

  // concat
  // string sentence = s2 + " " + s1;
  // string sentence = "C++" + " fun!"; // this is illegal

  // accessing charcaters and at methodd.
  // cout << s2[0] << endl; 
  // cout <<  s2.at(0) << endl;
  // s2.at[0] = "p"; 

  // for (char c: s2)
  //   cout << c << endl;

  // for (int c: s2)
  //   cout << c << endl; // prints ASCII values of characters- prints the integer values that represent the characters in the string.


  // a capital letter 'a' is lower than a capital letter 'A' , thats because a<A in the ASCII table. 
  // when comparing two strings, using comparison operators(<=,!= etc ), each character is compared one by one and lexically.

  // can compare two std::string objects, on std::string object and c-style string literal, one std::string object and a c-string variable.

  // string s1{"Apple"};
  // string s2{"Banana"};
  // string s3{"Kiwi"};
  // string s5{"apple"};
  // string s6("This is a string");

  // // s1 == s2; // false
  // // s1 != s2; // true
  // // s1 < s2;
  // // s1 > s2;
  // // s1 <= s2; 
  // // s1 == "Apple";

  // // Study about c++ string class to get familair with all the methods.
  // s1.substr(1, 4); // returns a substring starting from index 1 and length 4, which is "pple"

  // s1.find("apple"); // returns the index of the first occurrence of "apple" in s1, which is 0
  // s6.find("is", 4); // returns the index of the first occurrence of "is" in s6, starting from index 4, which is 5

  // s6.find("XX"); // returns string:npos (no position).

  // erase and clear methods -- removes a substring of characters from a std::string;
  // object.erase(start_index, length);

  // string s1 {"This is a test"};

  // cout << s1.erase(0, 5) << endl; // is a test
  // cout << s1.erase(5, 4) << endl; // is a

  // length method.
  // returns the no of characters in a string.

  // cout << s1.length() << endl;
  // s1 += ", Okay!";
  // cout << s1 << endl;

// using the getline() method w cin. this mKes sure that you can extract as many charcters as you want during a cin even if they're separated by whitespaces.
// getline(cin, sl) where cin stands for cin, and sl stands for the variable we're trying to read into/store into.

  string s1;
  cout << "Input your name: ";

  // getline(cin, s1);
  // cout << s1 << endl;

  // another case of getline()
  getline(cin, s1, 'x'); // "x", the third argument serves as a delimiter. this is where we want the getline to stop reading input at. 
  cout << s1 << endl;

  cout << endl;
  return 0;
} 