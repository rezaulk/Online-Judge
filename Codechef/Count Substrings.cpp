#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b,one=0;
        cin>>a;
        char ar[a];
        FOR(i,0,a)
        {
            cin>>ar[i];
            if(ar[i]=='1')
            {
                one++;
            }
        }
        b=one*(one+1)/2;
     cout<<b<<endl;
    }
}

