#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double x;
        cin>>x;
        int link=(int)x%10,sum=0;
        //cout<<link<<endl;
        while(1)
        {
            x=x/10;
            if(x<1)
            {
                sum=link+x*10;
                //cout<<x<<endl;
                break;
            }
        }
        cout<<sum<<endl;
    }
}
