#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,x=0,y=0;
    cin>>n;
    char pre;
    bool check=false;
    for(int i=0; i<n; i++)
    {
        char k;
        cin>>k;
        if(k=='U')
        {
            x=x;
            y=y+1;
            if(pre=='R')
            {
                check=false;
                 pre=NULL;
            }

            if(check==true)
            {
                sum++;
                check=false;
                //cout<<pre<<y<<k<<endl;
                pre=NULL;
            }
        }
        else if(k=='R')
        {
            x=x+1;
            y=y;
            if(pre=='U')
            {
                check=false;
                pre=NULL;
            }
            if(check==true)
            {
                sum++;
                check=false;
                //cout<<pre<<k<<endl;
                pre=NULL;

            }
        }
        if(x==y)
        {
            check=true;
            pre=k;
        }
    }
    cout<<sum<<endl;
}

