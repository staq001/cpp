#include <string>
#include "Trust_Account.h"
#include "Savings_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) : Savings_Account(name, balance, int_rate) {};

bool Trust_Account::deposit(double amount){
  if(amount >=5000.00){
    amount += 50.00;
  }

  return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
  if(noOfWithdrawals >=3){
    std::cout << "Maximum number of withdrawals exceeded." << std::endl;
    return false;
  }

  if(amount > (balance * 0.20)){
    std::cout << "Withdrawal amount exceeds 20% of the account balance." << std::endl;
    return false;
  }


  noOfWithdrawals++;
  return Savings_Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
  os << "[Trust Account: " << account.name << ", " << account.balance << ", " << account.int_rate << ", withdrawals: " << account.noOfWithdrawals << "]";
  return os;
}

bool Trust_Account::operator+=(double amount)
{
  return Trust_Account::deposit(amount);
}

bool Trust_Account::operator-=(double amount)
{
  return Trust_Account::withdraw(amount);
}