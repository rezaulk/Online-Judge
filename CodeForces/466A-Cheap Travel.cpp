#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c=n/m;
    if(m*a<=b)
    {
        cout<<n*a<<endl;
    }
    else
    {
        int cost=c*b+min((n%m)*a,b);
        cout<<cost<<endl;
    }

}

