#include <iostream>
using namespace std;
int main() {
//multiply any two matrices of (a x b) and (b x c) order
  const int n1 = 3, n2 = 4, n3 = 3;
  int arr1[n1][n2] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
  int arr2[n2][n3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};
  int ans[n1][n3];

  for (int m = 0; m < n2; m++) {
    for (int i = 0; i < n3; i++) {
      for (int j = 0; j < n1; j++) {
        if (m == 0) {
          ans[i][j] = arr1[i][m] * arr2[m][j];
        } else {
          ans[i][j] = ans[i][j] + (arr1[i][m] * arr2[m][j]);
        }
      }
    }
  }
  cout << "_________________________" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "| ";
    for (int j = 0; j < 3; j++) {

      cout << ans[i][j] << "\t| ";
    }
    cout << endl;
    cout << "_________________________" << endl;
  }
  return 0;
}
