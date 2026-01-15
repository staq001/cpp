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

  void display() const;

  int get_length() const;
  const char *get_str() const;
};

#endif  // _MYSTRING_H