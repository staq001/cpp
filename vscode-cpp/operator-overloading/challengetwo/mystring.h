
#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
  friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    // // challenge two
  friend Mystring operator-(const Mystring &lhs); // lowercase

  friend bool operator==(const Mystring &lhs, const Mystring &rhs); // return true is both strings are equal;
  friend bool operator!=(const Mystring &lhs, const Mystring &rhs); // return true is both strings are not equal;

  friend bool operator<(const Mystring &lhs, const Mystring &rhs); // return true is first string is lesser then the other is not equal;
  friend bool operator>(const Mystring &lhs, const Mystring &rhs); // return true is first string is greater then the other is not equal;

  //concatenation
  friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

  // concatenation II
  friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);

  // mutlitplication
  friend Mystring operator*(const Mystring &lhs, const int rhs);

  // multiplication II
  friend Mystring &operator*=( Mystring &lhs, const int rhs);

  // uppercase (pre)
  friend Mystring &operator++( Mystring &lhs);

  // uppercase (post)
  friend Mystring &operator++( Mystring &lhs, int);

  // lowercase (pre)
  friend Mystring &operator--( Mystring &lhs);

  // lowercase (post)
  friend Mystring &operator--( Mystring &lhs, int);    


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

  void display() const;

  int get_length() const;
  const char *get_str() const;
};

#endif  // _MYSTRING_H