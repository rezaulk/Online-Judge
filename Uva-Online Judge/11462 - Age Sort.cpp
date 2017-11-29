#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int ar[n];
        for(i=0; i<n; i++)
        {
           cin>>ar[i];
        }
        sort(ar,ar+n);
        for(i=0; i<n-1; i++)
        {
            cout<<ar[i]<<" ";
        }
        printf("%d\n",ar[i-1]);
    }
    return 0;
}

