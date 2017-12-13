#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    char ar[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>ar[i][j];
        }
    }
    int k=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int count=0;
            if(ar[i-1][j]=='o')
                count++;
            if(ar[i+1][j]=='o')
                count++;
            if(ar[i][j+1]=='o')
                count++;
            if(ar[i][j-1]=='o')
                count++;
            if(count%2==1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;

}
