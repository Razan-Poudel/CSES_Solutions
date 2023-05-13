#include <cstdlib>
#include <iostream>
using namespace std;
/*
**********************
Problem
**************
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3,
3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and
[1, 2, 4] are not arithmetic arrays. Sarasvati has an array of N non-negative
integers. The i-th integer of the array is Ai . She wants to choose a contiguous
arithmetic subarray from her array that has the maximum length. Please help her
to determine the length of the longest contiguous arithmetic subarray.
***********************************
 Input
 ******
 The first line of the input gives the number of test cases, T. T test cases
follow. Each test case begins with a line containing the integer N. The second
line contains N integers. The i-th integer is Ai
*/
int main() {
  int arr[10] = {23, 30, 37, 1, 3, 5, 7, 9, 15, 25};
  int length = sizeof(arr) / sizeof(arr[0]);
  int diff = 0, curr = 0, ans = 0;
  for (int i = 1; i < length; i++) {
    curr = 0;
    for (int j = i; j < length; j++) {
      if (arr[j] - arr[j - 1] == diff) {
        curr++;
        ans = max(ans, curr);
      } else {
        curr = 1;
        diff = arr[j] - arr[j - 1];
      }
    }
  }
  ans++;
  cout << "Max is : " << ans << endl;
  return 0;
}