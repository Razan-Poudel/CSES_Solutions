#include <iostream>
#include <string.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll h = 0;
    ll c = 0;
    for (ll i = 0; i < s.length() - 1; i++)
    {
        c = 0;
        while (s.at(i) == s.at(i + 1))
        {
            c++;
            i++;
            if (i == s.length() - 1)
            {
                break;
            }
        }
        if (c > h)
        {
            h = c;
        }
    }
    cout << h + 1;
    return 0;
}