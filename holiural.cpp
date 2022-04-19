#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int d[n], r[n];

        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        int c = INT16_MAX;

        for (int i = 0; i < n; i++)
        {
            d[i] = d[i] * k + r[i];
            c = min(c, d[i]);
        }

        cout << c << endl;
    }

    return 0;
}