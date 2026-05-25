#include <string>
#include "Checking_Account.h"
#include "Account.h"

Checking_Account::Checking_Account(std::string name, double balance) : Account(name, balance) {};

bool Checking_Account::withdraw(double amount){
  amount += withdrawal_fee;
  return Account::withdraw(amount);
};

void Checking_Account::print(std::ostream &os) const{
  os << "{Checking Account: " << name << ": " << balance << "}";
}

bool Checking_Account::deposit(double amount){
  return Account::deposit(amount);
}

double Checking_Account::get_balance()const{
  return Account::get_balance();
}

bool Checking_Account::operator+=(double amount){
  return Checking_Account::deposit(amount);
}

bool Checking_Account::operator-=(double amount){
  return Checking_Account::withdraw(amount);
}