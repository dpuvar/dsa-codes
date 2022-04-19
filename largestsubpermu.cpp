#include <bits/stdc++.h>
using namespace std;
void partSort(long long int arr[], int N, int a, int b)
{
    int l = min(a, b);
    int r = max(a, b);
    int temp[r - l + 1];
    int j = 0;
    for (int i = l; i <= r; i++)
    {
        temp[j] = arr[i];
        j++;
    }
    sort(temp, temp + r - l + 1);
    j = 0;
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> Ans;
        Ans.push_back(0);
        long long int A[n];
        long long int A1[n];
        long long int B[n];
        long long int B1[n];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            A1[i] = A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            B1[i] = B[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                partSort(A1, n, i, j);
                partSort(B1, n, i, j);
                int flag = 0;
                for (int k = i; k <= j; k++)
                {
                    if (A1[k] != B1[k])
                        flag++;
                }
                if (flag == 0)
                    Ans.push_back(j - i + 1);
                for (int z = i; z <= j; z++)
                {
                    A1[z] = A[z];
                    B1[z] = B[z];
                }
            }
        }
        sort(Ans.begin(), Ans.end());
        int SizeOfAns = Ans.size();
        cout << Ans[SizeOfAns - 1] << endl;
    }
}
