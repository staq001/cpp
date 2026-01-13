#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"


class Movies {
  private:
    std::vector<Movie> *movie_vector = new std::vector<Movie>();

// this is not exactly great.
// cleaner way would be to initialize the pointer to nullptr or whatever in the constructor, as opoosed to what i did here (initializing it to a random dynamic memory).

  public:
    ~Movies();

    bool add_movie(const std::string &name,const int &watched,  const std::string &rating) ;
    bool find_movie( const std::string &name) ;
    bool increment_watched( const std::string &name);
    void display_all_movies();
};

#endif