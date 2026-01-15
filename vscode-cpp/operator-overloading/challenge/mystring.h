
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
  friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
  char *str;

public:
  Mystring();                       // no args constructor
  Mystring(const char *s);          // overloaded constructor

  Mystring(const Mystring &source); // copy constructor;
  Mystring(Mystring &&source);

  Mystring &operator=(const Mystring &rhs); // overloaded copy assignment operator

  Mystring &operator=(Mystring &&rhs); // overloaded move assignment operator;
  ~Mystring();                         // destructor;

  // // challenge
  Mystring operator-(); // lowercase
  bool operator==(const Mystring &rhs); // return true is both strings are equal;
  bool operator!=(const Mystring &rhs); // return true is both strings are not equal;

  bool operator<(const Mystring &rhs); // return true is first string is lesser then the other is not equal;
  bool operator>(const Mystring &rhs); // return true is first string is greater then the other is not equal;

  //concatenation
  Mystring operator+(const Mystring &rhs);
  
  // concatenation II
  Mystring &operator+=(const Mystring &rhs);

  // mutlitplication
  Mystring operator*(const int rhs);

  // multiplication II
  Mystring &operator*=(const int rhs);

  // uppercase (pre)
  Mystring &operator++();

  // uppercase (post)
  Mystring &operator++(int);
  
  // lowercase (pre)
  Mystring &operator--();

  // lowercase (post)
  Mystring &operator--(int);    



  void display() const;

  int get_length() const;
  const char *get_str() const;
};

#endif  // _MYSTRING_H