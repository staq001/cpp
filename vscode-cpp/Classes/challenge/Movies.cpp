#include <iostream>
#include "Movies.h"


bool Movies::add_movie(const std::string &name, const int &watched, const std::string &rating){


  if(find_movie(name)){
    return false;
  }

  Movie new_movie{name, rating, watched};

  movie_vector->push_back(new_movie);
  return true;
}

bool Movies::find_movie(const std::string &name){
  for(auto &v: *movie_vector) {
    if (v.get_name() == name){
      return true;
    }
  }
  return false;
}

bool Movies::increment_watched(const std::string &name) {
  for(auto& v: *movie_vector) {
    if (name == v.get_name()){
      v.increment_watched();
      return true;
    }
  }
  return false;
};


void Movies::display_all_movies(){
  for (auto &v: *movie_vector ){
    std::cout << v.get_name() << ", " << v.get_rating() << ", " << v.get_watched() <<std::endl;
  }
}

Movies::~Movies(){
  delete movie_vector;
}