#include <iostream>
using namespace std;
int main() {
  // 2d array using dynamic allocation
  //   int **arr = new int *[10]; // array[pointer] of pointers[array]
  //   ---------array
  //                              // is also a pointer
  //   for (int i = 0; i < 10; i++) {
  //     arr[i] = new int[10];
  //   }
  //   arr[1][1] = 10;
  //   cout << arr[1][1];
  //   // deletion
  //   for (int i = 0; i < 10; i++) {
  //     delete[] arr[i];
  //   }
  //   delete[] arr;

  // -------------------------------------------------------------------------------------------------------------------
  // declare a 3d array using dynamic allocation
  int ***arr = new int **[10];
  for (int i = 0; i < 10; i++) {
    arr[i] = new int *[10];
    for (int j = 0; j < 10; j++) {
      arr[i][i] = new int[10];
    }
  }
  arr[1][1][1] = 10;
  cout << arr[1][1][1];

  // deletion of 3d array
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      delete[] arr[i][j];
    }
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}