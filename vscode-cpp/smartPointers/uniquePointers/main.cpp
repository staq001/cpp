#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"


class Test {
  private:
    int data;
  public:
    Test() : data(0) { std::cout << "Test constructor {" << data << "}" << std::endl; }
    Test(int data) : data(data) { std::cout << "Test constructor {" << data << "}" << std::endl; }
    int get_data() const { return data; }

    ~Test(){ std::cout << "Test destructor {" << data << "}" << std::endl; }
};

using namespace std;
int main(){

  // Test *t = new Test();
  // delete t;

  // std::unique_ptr<Test> t1{new Test(1000)};
  // std::unique_ptr<Test> t2 = std::make_unique<Test>(100);

  // std::unique_ptr<Test> t3;

  // // t3 = t1; // not allowed. we're not allowed to assign unique pointers. same as conpy construct, wont work.
  // t3 = std::move(t1);
  // // but we're allowed to move it. ergo, t3 points to t1(owns t1's object) and t1 becomes a nullptr;

  // if(!t1)
  //   std::cout << "t1 is a nullptr" << std::endl;

  std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000);
  std::cout << *a1 << std::endl;

  a1->deposit(5000);
  std::cout << *a1 << std::endl;

  std::vector<std::unique_ptr<Account>> accounts;


  accounts.push_back(make_unique<Checking_Account>("James", 1000));
  accounts.push_back(make_unique<Savings_Account>("Billy", 4000, 5.2));
  accounts.push_back(make_unique<Trust_Account>("Bobby", 5000, 4.5));

  std::unique_ptr<Checking_Account> ch {new Checking_Account("Alice", 2000)};
  accounts.push_back(std::move(ch));

for(const auto &acc:accounts){
  std::cout << *acc << std::endl;
}

  return 0;
}