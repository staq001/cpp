
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account{

  private:
    double balance;
    std::string name;

  public:
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; };

    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};



#endif


// if a file(.h file) is specified multiple times in multiple files, the compiler will process the file more than once(i.e it will see the declaration multiple times.). to solve this, we need an include guard that ensures the compiler processes this just once.  no matter how many times it's included. 

// #ifndef _ACCOUNT_H_   ---- include guard.
// #define _ACCOUNT_H_