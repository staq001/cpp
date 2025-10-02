#include <iostream>
#include <string>

using namespace std;

class Player{

  private:
    std::string name;
    int health;
    int xp;

    public:
      void set_name(std::string name_val){
        name = name_val;
      }

      Player(){
        cout << "No args constructor" << endl;
      }

      Player(std::string name) {
        cout << "string arg constructor called" << endl;
      }

      Player(std::string name, int health, int xp){
        cout << "Three args constructor called" << endl;
      }

      ~Player(){
        cout << "destructor called for " << name << endl;
      }
};


int main(){
{
  Player slayer;
  slayer.set_name("Slayer");
}

{
  Player frank{};
  frank.set_name("Frank");

  Player ryan{"Hero"};
  ryan.set_name("Hero");

  Player villain{"Villain", 100, 12};
  villain.set_name("villain");
}

{
  Player *enemy = new Player;
  enemy->set_name("Enemy");

  Player *level_boss = new Player("Level boss", 1000, 300);
  level_boss->set_name("Level boss");

  delete enemy;
  delete level_boss;
}

  return 0;
}