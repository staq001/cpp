#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){

  // c-style string.
  // char my_name[6] {"Frank"};// the last character is reserved for the null terminator '\0'.
  // goes without saying that you need to null terminate your c-style strings.
  // char my_name[6] = "Frank"; // this is also valid.

  char firstName[20] {};
  char lastName[20] {};
  char fullName[40] {};
  char temp[50]{};

  // cout << firstName; // will likely print garbage value

  // cout<< "Enter your first name: ";
  // cin >> firstName;

  // cout << "Enter your last name: ";
  // cin >> lastName;

  // cout << "_________________________________________________"<<endl;

  // cout << "Hello, " << firstName << " your first name has " << strlen(firstName)<< " characters." << endl;

  // cout << "and your last name, " << lastName << " has " << strlen(firstName)<< " characters." << endl;

  // size_t could be an unsigned long or int, depending on the system.

  // strcpy(fullName, firstName); // copy first name to full name
  // strcat(fullName, " ");        // concatenate full name and a space
  // strcat(fullName, lastName); // concatenate last name to full name.

  // cout << "Your full name is: " << fullName << endl;

  cout << "_______________________________________________"<<endl;
  cout <<"Enter your full name: ";
  cin.getline(fullName, 40); // this gets the full line of input including spaces.(50 characters max)
  // Note: getline is safer than cin >> because it prevents buffer overflow.
  // cin >> fullName;
  cout << "Your full name is: " << fullName << endl;
  strcpy(temp, fullName); // copy full name to temp

  cout << "_______________________________________________"<<endl;

  for (size_t i{0}; i < strlen(fullName); ++i) {
    if (isalpha(fullName[i]))
      fullName[i] = toupper(fullName[i]);
  }
  cout << "Your full name is: " << fullName << endl;

  if (strcmp(temp, fullName) ==0) {
    cout << temp << " and " << fullName << " are the same." << endl; 
  }else 
    cout << temp << " and " << fullName << " are not the same." << endl;


  cout << "_______________________________________________"<<endl;
  cout << "Result of comparing "<< temp  << " and " << fullName << ": " 
       << strcmp(temp, fullName) << endl; // 0 means they are the same, positive means temp is greater than fullName, negative means temp is less than fullName.
  cout << "Result of comparing "<< fullName  << " and " << temp << ": "  
       << strcmp(fullName, temp) << endl; // 0 means they are the same, positive means fullName is greater than temp, negative means fullName is less than temp.


    cout << endl;
  return 0;
}


// you must initialize a c-style string from the jump. allocating the length of the strinng/array is not enough.
// char my_name [8] {"John Doe"}; // C-style string initialization
// char my_name [8] ; // sumn like this would not work, because the string is not initialized.
// my_name = "Parents" // This line would not work because my_name is not initialized.


// include <cstring> // for c-style string functions
// like strlen, strcpy, strcat, strcmp, etc.

// include <cstdlib> // for c-style string functions
// for converting strings to integers, floats, long, etc.

