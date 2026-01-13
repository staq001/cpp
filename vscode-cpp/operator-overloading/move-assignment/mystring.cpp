#include <cstring>
#include <iostream>
#include "mystring.h"

Mystring::Mystring():str(nullptr){
  str = new char[1];
  *str = '\0';
};

Mystring::Mystring(const char *s):str(nullptr){
  if(s==nullptr){
    str = new char[1];
    *str = '\0';
  }else {
    str = new char[std::strlen(s) + 1];
    std::strcpy(str, s);
  }
}

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

 Mystring::Mystring(Mystring &&source):str(source.str){
  source.str = nullptr;
  std::cout << "move constructor used" << std::endl;
}

Mystring &Mystring::operator=(Mystring &&rhs){
  std::cout << "Using move assignment" << std::endl;
  
  if(this == &rhs)   // seld assignment 
    return *this;    // return current object

  delete[] str;      // deallocate current storage
  str = rhs.str;     // steal the pointer;

  rhs.str = nullptr; // null out the rhs object;

  return *this;      // return current object.
}

Mystring::~Mystring(){
  delete[] str;
}

// display method 
void Mystring::display()const{
  std::cout << get_str()<<": " << get_length() << std::endl;
};

//length getter
int Mystring::get_length() const { return std::strlen(str); };


// string getter
const char *Mystring::get_str() const { return str; };