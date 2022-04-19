#include<bits/stdc++.h>
using namespace std;

int main()
{

int k;
cin>>k;
while (k--)
{
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int p=0,q=0;
    int s,c;
    for (int i = 0; i < n; i++)
    {      s=INT16_MIN,c=INT16_MAX;
        for (int j = 0; j < m; j++)
        {
            s=max(s,a[i][j]);
            c=min(c,a[i][j]);
        }
        p=s-c;
        q=max(q,p);
    }
    

    cout<<q<<endl;



}




return 0;
}