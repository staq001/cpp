#include <iostream>
#include <stack>
#include <cstring>

using namespace std;


bool isBalancedParenthesis(char *input){
  stack<char> s;
  char parenthesis[]{"()"};
  char squareBrackets[]{"[]"};
  char curlyBraces[]{"{}"};




  for (size_t i{0}; i < strlen(input); ++i){
    if (input[i] == parenthesis[0] || input[i]==squareBrackets[0] ||input[i] ==curlyBraces[0] ) {
      s.push(input[i]);
    }else {
      if (input[i] == parenthesis[1]|| input[i]==squareBrackets[1]||input[i]==curlyBraces[1]){
        if (s.empty())
          return false;

        char top = s.top();

        if((top ==parenthesis[0] && input[i]==parenthesis[1]) ||(top ==curlyBraces[0] && input[i]==curlyBraces[1])  ||(top ==squareBrackets[0] && input[i]==squareBrackets[1])) {
          s.pop();
        }else {
          return false;
        }

      }
    }
  }
  if (s.empty()){
    return true;
  }
    else
      return false;
  };

int main(){

  char c[]{"HCSSV{()[]}{}[}"};

  bool ans = isBalancedParenthesis(c);

  cout << ans << endl;
  return 0;
}