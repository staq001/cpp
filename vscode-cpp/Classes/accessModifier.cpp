#include <iostream>

using namespace std;


class Player{

private:
  string name;
  int health;
  int xp;

public:
  void talk(string text) { cout << name << " says " << text << endl; }
  bool isdead();

};


