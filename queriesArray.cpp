#include <iostream>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r, x;

        cin >> l >> r >> x;
        int m = l - 1;
        int n = r - 1;
        int mid;
        while (m <= n)
        {
            mid = (m + n) / 2;
            if (arr[mid] >= x)
            {
                n = mid - 1;
            }
            else
            {
                m = mid + 1;
            }
        }
        cout << r - m << endl;
    }
    return 0;
}
