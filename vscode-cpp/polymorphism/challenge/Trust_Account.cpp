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

double Trust_Account::get_balance()const{
  return Account::get_balance();
}

void Trust_Account::print(std::ostream &os)const {
  os << "[Trust Account: " << name << ", " << balance << ", " << int_rate << ", withdrawals: " << noOfWithdrawals << "]";
}

bool Trust_Account::operator+=(double amount)
{
  return Trust_Account::deposit(amount);
}

bool Trust_Account::operator-=(double amount)
{
  return Trust_Account::withdraw(amount);
}