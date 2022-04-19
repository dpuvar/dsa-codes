#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int c = 0;
        int s = 0;
        int ans = INT16_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                c = c + a[i];
            }
            else
            {
                s = s + a[i];
            }

            ans = max(s, c);
        }

        cout << ans << endl;
    }

    return 0;
}