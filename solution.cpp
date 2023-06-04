#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int c = 0;
        c += (n - 1 + k - 1) / k;
        cout << c + 1 << endl;
    }

    return 0;
}
