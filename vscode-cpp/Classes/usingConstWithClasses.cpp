#include <iostream>
#include <string>

using namespace std;

class Player{

  private:
    std::string name;
    int health;
    int xp;
  public:
    std::string get_name() const { return name; }
    int get_health() { return health; };
    int get_xp() { return xp; };
    Player(std::string name_val="None ", int health_val=0, int xp_val=0);

    //copy constructor
    Player(const Player &source);

    // Destructor
    ~Player(){ cout << "Destructor called for " << name << endl; }
};

Player::Player(const Player &source):name(source.name), health(source.health), xp(source.xp) {
  cout << "Copy constructor - made a copy of " << source.name << endl;
}


void display_player(const Player &p) {
  cout << "Name: " << p.get_name() << endl;
}
 
Player::Player(std::string name_val, int health_val, int xp_val) : name(name_val), health(health_val), xp(xp_val) {
    cout << "Three-args constructor:" << name<< endl;

};

int main(){

  const Player frank{"Frank"};
  display_player(frank);

  Player hero{"Hero", 100}; // doesn't have a const declaration.
  display_player(hero);
  return 0;
}



/**
 * in this module, we learnt how to use const with classes.
 * 
 * say we had an Object like Player frank and we try to use any of the class methods peculiar to the object, the compiler throws an error, even if it's a get_name() method printing to the console. WHy? because the compiler cannot guarantee that the method wont change the object. 
 * 
 * what to do? use the const qualifier on the method after definition like i did with get_name on line 13. this solves the problem.
 */