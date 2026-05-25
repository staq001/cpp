#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main(){
  try{
    std::unique_ptr<Account> account = std::make_unique<Checking_Account>("Moe", 10.0);

    account->withdraw(100.0);
  }
  catch (const IllegalBalanceException& e) {
    std::cerr << e.what() << std::endl;
  }
  catch(const InsufficientFundsException& e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "Program completed successfully." << std::endl;
  return 0;
}