#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    while(n--)
    {
        int n1,max=0,a;
        cin>>n1;
        while(n1--)
        {
            cin>>a;
           if(max<a)
           {
               max=a;
           }
        }
        cout<<"Case "<<i<<": "<<max<<endl;
        i++;
    }
}
