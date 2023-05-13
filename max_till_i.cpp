#include <algorithm>
#include <iostream>
using namespace std;
// for an array , find the maximum value for each element till the element from
// the beginning

int main() {

  int arr[6] = {1, 0, 5, 4, 6, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int maxti = arr[0];
  
  for (int i = 0; i < size; i++) {
    maxti = max(arr[i], maxti);
    cout << maxti << "\t";
  }
  return 0;
}