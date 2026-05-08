#include <iostream>
#include <vector>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main(){
  std::cout << "\n ==== Pointers === " << std::endl;
  Account *p1 = new Account();
  Account *p2 = new Savings_Account();
  Account *p3 = new Trust_Account();
  Account *p4 = new Checking_Account();

  p1->withdraw(1000);
  p2->withdraw(1000);
  p3->withdraw(1000);
  p4->withdraw(1000);

  // std::cout << "\n ==== Array =====" << std::endl;
  // Account *array[] = {p1, p2, p3, p4};

  // for (auto i = 0; i < 4;i++){
  //   array[i]->withdraw(1000);
  // }

  // std::cout << "\n ===== Vector =====" << std::endl;
  // std::vector<Account *> accounts{p1, p2, p3, p4};


  // for (auto acc:accounts){
  //   acc->withdraw(1000);
  // }

  std::cout << "\n ===== Clean Up =====" << std::endl;

  delete p1;
  delete p2;
  delete p3;
  delete p4;

  return 0;
}