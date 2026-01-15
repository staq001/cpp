#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player{
  
  private:
    static int num_players; // dont try to initialize here.you'll get an error.

    std::string name;
    int health;
    int xp;

  public:
    std::string get_name() { return name; };
    int get_health() { return health; }
    int get_xp() { return xp; }

    Player(std::string name_val = "None", int health = 0, int xp_val = 0);

    // copy constructor
    Player(const Player &source);

    ~Player();

    static int get_num_players();
};

#endif 