#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  /*
  Problem
  Isyana is given the number of visitors at her local theme park on N
  consecutive days. The number of visitors on the i-th day is Vi
  . A day is record breaking if it satisfies both of the following conditions:

  ● The number of visitors on the day is strictly larger than the number of
  visitors on each of the previous days.
  ● Either it is the last day, or the number of visitors on the day is strictly
  larger than the number of visitors on the following day. Note that the very
  first day could be a record breaking day! Please help Isyana find out the
  number of record breaking days.
  Input
  The first line of the input gives the
  number of test cases, T. T test cases follow. Each test case begins with a
  line containing the integer N. The second line contains N integers. The i-th
  integer is Vi
  .
  */
  int arr[8] = {1, 2, 0, 7, 2, 0, 2, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  int maxnum = 0, rbd = 0;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > maxnum && arr[i] > arr[i + 1]) {
      rbd++;
    }
    maxnum = max(maxnum, arr[i]);
  }
  if (arr[size - 1] > maxnum) {
    rbd++;
  }
  cout << "It has " << rbd << " record breaking days." << endl;
  return 0;
}