#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int x=ar[0];
    bool one=true,two=true,three=true;
    for(int i=1;i<n;i++)
    {
        if(x==ar[i])
        {
            one=false;
        }
        else if(ar[i]==0||x==0)
        {
            two=false;
        }
        else
        {
            three=true;
        }
    }
    if(one==true&&two==true&&three==true)
    {
        cout<<3<<endl;
    }
    else if(one==true&&two==true||one==true&&three==true)
    {
        cout<<2<<endl;
    }
    else
    {
         cout<<1<<endl;
    }

}
