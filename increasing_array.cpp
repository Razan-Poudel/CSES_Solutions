#include <iostream>
using namespace std;
#define ll long long


/*
You are given an array of n
 integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n
: the size of the array.

Then, the second line contains n
 integers x1,x2,…,xn
: the contents of the array.

Output

Print the minimum number of moves.

Constraints
1≤n≤2⋅105

*/



int main()
{
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll arr[n];
    ll moves = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
               moves = moves + arr[i - 1] - arr[i];
            arr[i] += arr[i - 1] - arr[i];
        }
    }
    cout << endl
         << moves;
    return 0;
}
