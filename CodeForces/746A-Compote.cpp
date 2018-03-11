#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,sum=0;
    cin>>n>>a>>b;
    while(true)
    {
        if(n!=0)
        {
            if(n*2<=a&&n*2*2<=b)
            {
                sum=n+n*2+n*4;
                break;
            }
            else
            {
                n--;
            }
        }
        else
        {
            break;
        }
    }
    cout<<sum<<endl;
}


