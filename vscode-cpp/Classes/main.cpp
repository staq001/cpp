#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attributes.
    public:
    string name{"Player"};
    int health{100};
    int xp{3};
    
    // methods.
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();   
    
};

class Account{
//attributes

    string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main() {
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player *enemy{nullptr};
    enemy = new Player();

    Player players[]{ frank, hero};
    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    enemy->name = "enemy";
    enemy->talk("Yo man!");
    delete enemy;

    frank.talk("Hi there!");

    return 0;
}