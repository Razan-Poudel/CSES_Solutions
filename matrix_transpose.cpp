#include <iostream>
using namespace std;
#define ll long long;

/*
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

*/
// just a utility fumction to just print the change
void print(int arr[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}
// main function
int main() {
  int n = 3;
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  print(matrix);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int t = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = t;
    }
  }

  cout << "---------After-Transpose---------" << endl;
  print(matrix);

  return 0;
}