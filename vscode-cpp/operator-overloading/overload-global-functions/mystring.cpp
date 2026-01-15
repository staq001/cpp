#include <cstring>
#include <iostream>
#include "mystring.h"

// constructor
Mystring::Mystring():str(nullptr){
  str = new char[1];
  *str = '\0';
};

// overloaded constructor
Mystring::Mystring(const char *s):str(nullptr){
  if(s==nullptr){
    str = new char[1];
    *str = '\0';
  }else {
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s);
  }
}

// copy constructor
Mystring::Mystring(const Mystring &source) : str(nullptr) {
  str = new char[std::strlen(source.str) + 1];
  std::strcpy(str, source.str);
};

// copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
  std::cout << "copy assignment" << std::endl;

  if(this == &rhs){
    return *this;
  }

  delete[] str;
  // delete[] this->str;    // same
  str = new char(std::strlen(rhs.str) + 1);
  std::strcpy(this->str, rhs.str);

  return *this;
}

// move constructor
 Mystring::Mystring(Mystring &&source):str(source.str){
  source.str = nullptr;
  std::cout << "move constructor used" << std::endl;
}

// move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
  std::cout << "Using move assignment" << std::endl;
  
  if(this == &rhs)   // seld assignment 
    return *this;    // return current object

  delete[] str;      // deallocate current storage
  str = rhs.str;     // steal the pointer;

  rhs.str = nullptr; // null out the rhs object;

  return *this;      // return current object.
}

// destructor
Mystring::~Mystring(){
  delete[] str;
}

// make lowercase
// Mystring Mystring::operator-()const {
//   char *buff = new char[std::strlen(str) + 1];
//   std::strcpy(buff, str);

//   for (size_t t = 0; t < std::strlen(buff); t++){
//     buff[t] = std::tolower(buff[t]);

//     // better option
//     // buff[t] = std::tolower(static_cast<unsigned char>(buff[t]));

//     /** why?
//      * Because calling std::tolower with a char can cause 
//      * undefined behavior if char is signed and the value is 
//      * negative.
//      * 
//      */
//   }

//   Mystring temp{buff};
//   delete[] buff;

//   return temp;
// }

// //concatenate
// Mystring Mystring::operator+(const Mystring &rhs) const {
//   char *buff = new char[std::strlen(str) + 1];
//   // copy str into buff 
//   std::strcpy(buff, str);

//   // concatenate both elements.
//   std::strcat(buff, rhs.str);

//   Mystring temp{buff};
//   delete[] buff;
//   return temp;
// }

// // Equality
// bool Mystring::operator==(const Mystring &rhs)const {
//   return (std::strcmp(str, rhs.str) == 0);

//   // if(std::strcmp(str, rhs.str)==0)
//   //   return true;

//   // return false;
// }

// display method 
void Mystring::display()const{
  std::cout << get_str()<<": " << get_length() << std::endl;
};

//length getter
int Mystring::get_length() const { return std::strlen(str); };


// string getter
const char *Mystring::get_str() const { return str; };



//** GLOBAL FUNCTIONS implemementation */
// Equality

bool operator==(const Mystring &lhs, const Mystring &rhs){
  return (std::strcmp(lhs.str, rhs.str) == 0);
}

Mystring operator-(const Mystring &obj){
  char *buff = new char[std::strlen(obj.str) + 1];
  std::strcpy(buff, obj.str);

  for (size_t i=0; i < std::strlen(buff); i++){
    buff[i] = std::tolower((buff[i]));
  };

  Mystring temp{buff};
  delete[] buff;

  return temp;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
  char *buff = new char[std::strlen(lhs.str) + 1];
  // copy str into buff 
  std::strcpy(buff, lhs.str);

  // concatenate both elements.
  std::strcat(buff, rhs.str); 

  Mystring temp{buff};
  delete[] buff;
  return temp;
}
