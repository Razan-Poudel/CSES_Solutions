#include <iostream>
#define ll long long
using namespace std;
/*
Time limit: 1.00 s Memory limit: 512 MB
You are given all numbers between 1,2,…,n
 except one. Your task is to find the missing number.

Input

The first input line contains an integer n
.

The second line contains n−1
 numbers. Each number is distinct and between 1
 and n
 (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105

*/

int main()
{
    ll n;
    ll t = 0;
    cin >> n;
    ll s = n * (n + 1) / 2;
    for (ll i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        t += a;
    }
    cout << s - t;
}
