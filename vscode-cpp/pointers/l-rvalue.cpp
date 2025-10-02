#include <iostream>
#include <string>

using namespace std;

int main(){
// l-values are objects that occupy a space in memory and are addressable.
int c{100}; // c is an l-value
c = 1000;
c = 1000 + 20;

string name; // name is an l-value.
name = "Frank";

// whats not an l-value? Frank, 100 are not l-values because theyre not addressable.

// 100 = x;       // compiler error
// "Fassad" = string surname;
}