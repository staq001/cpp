#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie{

  private:
      std::string name;
      std::string rating;
      int watched;
  public:
    std::string get_name() { return name; };
    std::string get_rating() { return rating; };
    int get_watched() { return watched; };
    void increment_watched() { ++watched; };

    Movie(std::string name_val, std::string rating_val, int watched_val);

    Movie(const Movie &source);

    // ~Movie();
};


#endif