#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie(std::string name_val, std::string rating_val, int watched_val): name(name_val), rating(rating_val), watched(watched_val){}

Movie::Movie(const Movie &source): name(source.name), rating(source.rating), watched(source.watched){}

// Movie::~Movie(){
//   cout << "Movie: " << name << " destroyed" << endl;
// }
