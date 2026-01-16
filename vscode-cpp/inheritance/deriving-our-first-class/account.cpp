#include <iostream>
#include "account.h"

Account::Account():name("An account"), balance(0.0){};

Account::~Account(){

}

void Account::deposit(double amount){
  std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount) { std::cout << "Account withdraw called with " << amount << std::endl; }