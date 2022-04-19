#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1;
        cin >> str1;

        stack<char> st;

        for (int i = 0; i < str1.size(); i++)
        {
            if (st.empty() || str1[i] != st.top())
            {
                st.push(str1[i]);
            }
            else
            {
                st.pop();
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}