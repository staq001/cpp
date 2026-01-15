#include <iostream>
#include "staticClassMembers.h"

using namespace std;
void display_active_players(){
  cout << "Active Players " << Player::get_num_players() << endl;
}

int main(){
  display_active_players();

  Player hero{"hero"};
  display_active_players();

  {
      Player frank{"frank"};
      display_active_players();
    }
    display_active_players();
    
    Player *enemy = new Player("Enemy", 100);
    display_active_players();

    return 0;
}