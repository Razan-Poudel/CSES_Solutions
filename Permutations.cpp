#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if (n > 1 && n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    for (ll i = 2; i <= n; i++)
    {
        cout << i++ << " ";
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << i++ << " ";
    }

    return 0;
}