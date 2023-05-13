#include <iostream>
#include <iterator>
using namespace std;
/*
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/
int main() {
  int arr[5][5] = {{1, 4, 7, 11, 15},
                   {2, 5, 8, 12, 19},
                   {3, 6, 9, 16, 22},
                   {10, 13, 14, 17, 24},
                   {18, 21, 23, 26, 30}};

  int x = 0;
  int y = 0;
  int target = 5;
  while (y < 5) {
    x = 0;
    while (x < 5 && arr[x][y] <= target) {
      cout << x << " " << y << " " << arr[x][y] << endl;
      if (arr[x][y] == target) {
        cout << "Found" << endl;
        goto end;
      }
      x++;
    }
    y++;
  }
  cout << "Not found" << endl;

end:

  return 0;
}