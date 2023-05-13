#include <iostream>
using namespace std;
int main() {

	//to find the first number which repeats itself in an array of positive integers in O(n) time complexity

  int arr[7] = {1, 5, 3, 4, 3, 5, 5};
  int size = 7;
  int idx[100000];
  int sizeofidx = sizeof(idx) / sizeof(idx[0]);

//set -1 in out dummy array
  for (int i = 0; i < sizeofidx; i++) {
    idx[i] = -1;
  }

  for (int i = 0; i < size; i++) {
    if (idx[arr[i]] != -1) {
      cout << " index " << idx[arr[i]] << "." << endl;
      return 0;
    }
    idx[arr[i]] = i;
  }
  cout << "No repeating elements :(" << endl;
  return 0;
}
