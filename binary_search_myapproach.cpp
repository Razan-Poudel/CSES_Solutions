#include <iostream>
using namespace std;

int main() {
	//binary search algorithm 
	//time complexity: O(log(n))
	
  int limitingfloor = 100;
  int max = 100;
  int min = 0, prevmin = 0;
  int safety = 0;
  while ((min != limitingfloor && max != limitingfloor) && safety < 100) {
    if (min < limitingfloor) {
      prevmin = min;
      min = min + ((max - min) / 2);
    } else {
      //   prevmin = min;
      max = min;
      min = prevmin;
    }
    safety++;
    cout << min << "\t" << max << "\t" << endl;
  }
  cout << min << "\t" << max << "\t" << endl;

  return 0;
}
