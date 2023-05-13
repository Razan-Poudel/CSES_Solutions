#include <iostream>
using namespace std;
//remove the duplicate characters form a string

int main() {
  string s = "abbaca";
top:
  int len = s.length();
  for (int i = 0; i < len - 1; i++) {
    if (s.at(i) == s.at(i + 1)) {
      s = s.substr(0, i) + s.substr(i + 2, len + 1 - i);
      goto top;
    }
  }
  cout << s;
  return 0;
}
