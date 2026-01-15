#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  private:
    char *str;
  public:
    Mystring();         // no args constructor
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor;

    Mystring &operator=(const Mystring &rhs); // overloaded assignment operator
    ~Mystring();                      // destructor;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif