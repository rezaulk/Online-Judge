#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,d=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a==1&&b==1)
        {
            d++;
        }
        else if(a==1&&c==1)
        {
            d++;
        }
        else if(b==1&&c==1)
        {
            d++;
        }
    }
    cout<<d;
    return 0;
}
