#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song
{
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;

public:
    Song() = default;
    Song(std::string name, std::string artist, int rating) : name(name), artist(artist), rating(rating) {}

    std::string get_name() const
    {
        return name;
    }

    std::string get_artist() const
    {
        return artist;
    }

    int get_rating() const
    {
        return rating;
    }

    bool operator<(const Song &rhs)
    {
        return this->name < rhs.name;
    }

    bool operator==(const Song &rhs)
    {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s)
{
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
    return os;
}

void display_menu()
{
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next Song" << std::endl;
    std::cout << "P - Play Previous Song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "=================================================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &s)
{
    std::cout << "Playing: " << s << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song)
{
    for (auto &p : playlist)
    {
        std::cout << p << std::endl;
    }

    std::cout << "Current Song: \n"
              << current_song << std::endl;
}

int main()
{
    std::list<Song> playlist{
        {"God's plan", "Drake", 5},
        {"Never be the same", "Camila Cabello", 5},
        {"Pray for me", "The Weekend and K.Lamar", 4},
        {"Middle", "Zedd, Maren Morris & Grey", 4},
        {"Wait", "Maroone 5", 4},
        {"Whatever it takes", "Imagine Dragons", 3},
    };

    std::list<Song>::iterator current_song = playlist.begin();
    char ans;
    auto current = current_song;

    std::string song_name;
    std::string artist_name;
    int song_rating;

    display_menu();
    std::cin >> ans;
    ans = std::toupper(ans);
    while (ans != 'Q')
    {
        if (ans == 'F')
        {
            std::cout << "Playing first song" << std::endl;
            play_current_song(playlist.front());
        }
        if (ans == 'N')
        {
            current++;
            if (current_song == playlist.end())
                current_song = playlist.begin();
            play_current_song(*current);
        }
        if (ans == 'P')
        {
            if (current_song == playlist.begin())
                current_song = playlist.end();
            current--;

            play_current_song(*current);
        }
        if (ans == 'A')
        {
            std::cout << "Enter song name: ";
            getline(std::cin, song_name);
            std::cout << "Enter artist name: ";
            getline(std::cin, artist_name);
            std::cout << "Enter rating: ";
            std::cin >> song_rating;
            playlist.emplace(current, song_name, artist_name, song_rating);
            current--;

            std::cout << "Adding and playing new song" << std::endl;
            play_current_song(*current);
        }
        if (ans == 'L')
        {
            display_playlist(playlist, *current);
        }

        display_menu();
        getline(std::cin, ans);
    }

    std::cout
        << "Thanks for listening" << std::endl;
    return 0;
}
