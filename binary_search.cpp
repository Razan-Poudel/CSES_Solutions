#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

void binarysearch(int key) {
  int arr[100];
  for (int i = 0; i < 100; i++) {
    arr[i] = i + 1;
  }

  int size = 100, first = 0, last = size, middle;
  bool found = false;
  
  while (!found && first != last) {
    int middle = floor((last + first) / 2);
    if (arr[middle] > key) {
      last = middle;
    } else if (arr[middle] < key) {
      first = middle;
    } else {
      found = true;
      cout << "Found at index " << middle << "." << endl;
    }
  }
}
int main() {
  for (int i = 1; i <= 100; i++) {
    binarysearch(i);
  }

  return 0;
}