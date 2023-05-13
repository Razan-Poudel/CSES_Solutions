#include <iostream>
using namespace std;
#define ull long long int
int main()
{

/*
Time limit: 1.00 s Memory limit: 512 MB
Your task is to divide the numbers 1,2,…,n
 into two sets of equal sum.

Input

The only input line contains an integer n
.

Output

Print "YES", if the division is possible, and "NO" otherwise.

After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1≤n≤106 */
    ull n;
    cin >> n;
    ull sum = n * (n + 1) / 2;
    ull arr1[1000000], arr2[1000000], size1 = 0, size2 = 0, sum1 = 0, sum2 = 0;
    if (sum % 2 == 0)
    {
        for (ull i = n; i > 0; i--)
        {
            if (sum1 < sum2)
            {
                arr1[size1] = i;
                size1++;
                sum1 += i;
            }
            else
            {
                arr2[size2] = i;
                size2++;
                sum2 += i;
            }
        }

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    cout << size1 << endl;
    for (ull i = 0; i < size1; i++)
    {
        cout << arr1[i] << "\t";
    }
    cout << endl
         << size2 << endl;
    for (ull i = 0; i < size2; i++)
    {
        cout << arr2[i] << "\t";
    }
    cout << endl;

    return 0;
}
