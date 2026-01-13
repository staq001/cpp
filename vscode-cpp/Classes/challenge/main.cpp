#include <iostream>
#include "Movies.h"
#include <vector>

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);



void increment_watched(Movies &movies,std::string name){
if (movies.increment_watched(name)){
  std::cout << name << " watched incremented" << std::endl;
}else {
  std::cout << name << " not found" << std::endl;
}
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
  if(movies.add_movie(name, watched, rating)){
  std::cout << name << " added" << std::endl;
  }else {
      std::cout << name << " already exists" << std::endl;
  }
}



int main(){
  Movies movies;
  add_movie(movies, "Inception", "PG", 1);
  add_movie(movies, "interstellar", "PG", 1);
  add_movie(movies, "interstellar", "PG", 1);
  add_movie(movies, "the prestige", "PG", 1);
  movies.display_all_movies();

  increment_watched(movies, "the prestige");
  increment_watched(movies, "thevvv");


  movies.display_all_movies();

  return 0;
}