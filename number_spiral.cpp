#include <iostream>
using namespace std;
#define ull unsigned long long


//solution for task: https://cses.fi/problemset/task/1071
int main()
{
  ull t;
  cin >> t;
  for (ull iter = 0; iter < t; iter++)
  {
    ull i, j;
    cin >> i >> j;
    ull v;
    (i >= j) ? ((i % 2 == 0) ? (v = (i * i) - (j - 1)) : (v = ((i - 1) * (i - 1)) + j)) : ((j % 2 != 0)? ( v = (j * j) - (i - 1)):(v = ((j - 1) * (j - 1)) + i));
    cout << v<<endl;
  }
  return 0;
}
