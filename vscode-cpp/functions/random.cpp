#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

  int random_number{}; 
  size_t count{10}; // no of random nos to generate
  int min{1}; // lower bound {incusive}
  int max{6}; // upper bound {incusive}

// seed the random number generator
// if you dont, you will get the same sequence random numbers every run

  cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
  // srand(time(nullptr)); // seeding the random no generator witha differnt num everytime we run the program.

  for (size_t i{1}; i <= count; ++i) {
    random_number = rand() % max + min;
    cout << random_number << endl;
  };

  cout << endl;
  return 0;
}