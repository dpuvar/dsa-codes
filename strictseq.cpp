#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int m;
    cin >> m;
    long long int a[m];
    string s, str;

    for (int j = 0; j < m; j++)
    {
        cin >> a[j];
    }

    long long int j = 0;
    long long int i = 0;
    while (m--)
    {

        if (a[j] < a[j + 1])
        {
            s = "Yes";
        }
        else
        {
            s = "No";
            break;
        }

        j++;
    }

    while (m--)
    {
        if (a[i + 1] < a[i])
        {
            str = "Yes";
        }

        else
        {
            str = "No";
            break;
        }

        i++;
    }

    if (s == "Yes" || str == "Yes")
    {
        cout << "Yes" << endl;
    }
    else
    {

        cout << "No" << endl;
    }

    return 0;
}