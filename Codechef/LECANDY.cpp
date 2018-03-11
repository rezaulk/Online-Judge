#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,sum=0;
        cin>>a>>b;
        int ar[a];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }

        if(sum<=b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
