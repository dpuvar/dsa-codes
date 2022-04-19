#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, k;
        cin >> n >> c >> k;
        long int w[n];

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        int max = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            int sum1 = 0;
            for (int j = i; j < n; j++)
            {
                sum1 += w[j];
                if (sum1 >= k && sum1 <= c && ((j - i) + 1) > count)
                {
                    count = ((j - i) + 1);
                }
                if (sum1 > c)
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
