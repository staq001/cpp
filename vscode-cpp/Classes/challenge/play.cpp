#include <vector>
#include <string>
#include <iostream>

using namespace std;


void display(vector<int> *vec){
  for(auto &v :*vec){
    cout << v << endl;
  }
}

void add_element(vector<int> *vec, int element){
  vec->push_back(element);
}
int main(){
  vector<int> *vec = new vector<int>(5);

  add_element(vec, 4);
  display(vec);
}
