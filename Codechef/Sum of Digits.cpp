#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,k,i=0;
        cin>>x;
        int num,sum=0;
        while(1)
        {
            k=x%10;
            sum=sum*10+k;
            cout<<sum<<endl;
            x=x/10;
            if(x<1)
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
}

