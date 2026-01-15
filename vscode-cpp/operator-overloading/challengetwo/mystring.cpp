
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
  str = new char[std::strlen(rhs.str) + 1];
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
// display method 
void Mystring::display()const{
  std::cout << get_str()<<": " << get_length() << std::endl;
};

//length getter
int Mystring::get_length() const { return std::strlen(str); };


// string getter
const char *Mystring::get_str() const { return str; };

// //overloaded stream extraction and insertion.

std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
  os << rhs.str;
  return os;
}

std::istream &operator>>(std::istream &in, Mystring &rhs){
  char *buff = new char[1000];
  in >> buff;

  rhs = Mystring{buff};

  delete[] buff;
  return in;
}



// CHALLENGE

// lowercase
  Mystring operator-(const Mystring &lhs){
    char *buff = new char[std::strlen(lhs.get_str()) + 1];
    std::strcpy(buff, lhs.get_str());

    for (size_t i{0}; i < std::strlen(lhs.get_str()); i++){
      buff[i] = std::tolower(static_cast<unsigned char>(buff[i]));
    }

    Mystring temp{buff};
    delete[] buff;

    return temp;
  }

  bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) == 0);
  } 

  bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) != 0);
  }
  
  bool operator<(const Mystring &lhs, const Mystring &rhs){
    if (lhs.str< rhs.str)
      return true;
    return false;
  };

  bool operator>(const Mystring &lhs, const Mystring &rhs){
    if (lhs.str> rhs.str)
      return true;
    return false;
  }

  //concatenation
  Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[1000];
    std::strcpy(buff, lhs.str);

    // concatenate;
    std::strcat(buff, rhs.str);

    Mystring temp{buff};
    delete[] buff;
    return temp;
  }
  
Mystring &operator+=(Mystring &lhs, const Mystring &rhs){

  lhs = lhs + rhs;
  return lhs;
}

Mystring operator*(const Mystring &lhs, const int rhs){
  // CORRECT but dangerous
  // char *buff = new char[1000];

  // for (size_t i{0}; i < rhs; i++){
  //   std::strcat(buff, this->str);
  // }

  // Mystring temp{buff};
  // delete[] buff;

  // return temp;

  // more careful would be;

  if(rhs<= 0)
    return lhs;

  size_t len = std::strlen(lhs.str);
  size_t total = len * rhs + 1;

  char *buff = new char[total];
  buff[0] = '\0';

  for (int i = 0; i < rhs; i++)
    std::strcat(buff, lhs.str);

  Mystring temp(buff);
  delete[] buff;

  return temp;
}

Mystring &operator*=(Mystring &lhs, const int rhs) {
  lhs = lhs * rhs;

  return lhs;
};


Mystring &operator++(Mystring &lhs){
  char *buff = new char[std::strlen(lhs.get_str()) + 1];
  std::strcpy(buff, lhs.get_str());

  for (size_t i{0}; i < std::strlen(lhs.get_str()); i++){
    buff[i] = std::toupper(static_cast<unsigned char>(buff[i]));
  }
  Mystring temp{buff};

  delete[] buff;

  return lhs = temp;
}

Mystring &operator++( Mystring &lhs, int){
  return ++lhs;
}

// lowercase (pre)
Mystring &operator--( Mystring &lhs){
  char *buff = new char[std::strlen(lhs.get_str()) + 1];
  std::strcpy(buff, lhs.get_str());

  for (size_t i{0}; i < std::strlen(lhs.get_str()); i++){
    buff[i] = std::tolower(static_cast<unsigned char>(buff[i]));
  }
  Mystring temp{buff};

  delete[] buff;

  return lhs = temp;
}

// lowercase (post)
Mystring &operator--( Mystring &lhs, int){
  return --lhs;
}