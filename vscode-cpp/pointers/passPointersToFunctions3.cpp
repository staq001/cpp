#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display( const vector<string>* const v){
  for (auto s:*v)
    cout << s << " ";
  cout << endl;
  // (*v).at(0) = "Funny";
  // v = nullptr;
}

void display(int*array, int sentinel){
  while (*array!=sentinel)
    cout << *array++ << " ";
  cout << endl;
}

int main(){
  cout << "____________________________" << endl;
  vector<string> stooges{"Larry", "Moe", "Curly"};
  display(&stooges);

  cout << "\n___________________________" << endl;
  int scores[]{100, 98, 87, 85, -1};
  display(scores, -1);

  cout << endl;
  return 0;
}