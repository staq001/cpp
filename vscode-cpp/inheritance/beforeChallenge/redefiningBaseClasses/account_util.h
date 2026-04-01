#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H

#include <vector>
#include "Account.h"
#include "Savings_Account.h"

// utility helper functions for account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// utility helper fuctions for savings acount class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

#endif // ACCOUNT_UTIL_H
