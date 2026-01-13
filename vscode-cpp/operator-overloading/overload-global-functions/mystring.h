#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  friend bool operator==(const Mystring &lhs, const Mystring &rhs);
  friend Mystring operator-(const Mystring &obj);
  friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
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

  // Mystring operator-() const; // make lowercase
  // // when loading member methods, remember that unary operators take no paramter and binary operators take one paramter.

  // Mystring operator+(const Mystring &rhs) const; // concatenate
  // bool operator==(const Mystring &rhs) const;    // Equality

  void display() const;
  int get_length() const;
  const char *get_str() const;
};

#endif  // _MYSTRING_H