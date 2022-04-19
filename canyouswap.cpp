#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] <= a[min])
                {
                    min = j;
                }
            }
            if (i != min)
            {
                if (a[i] != a[min])
                {
                    int temp = a[i];
                    a[i] = a[min];
                    a[min] = temp;
                    count++;
                }
            }
        }
        if (count <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
