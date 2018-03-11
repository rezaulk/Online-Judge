#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x,y,z,k=0,i=1,j=1,count=0;
    cin>>x>>y>>z;
    for(int i=1;i<=z;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            //cout<<i<<endl;
            count++;
        }
    }
    cout<<count<<endl;
}
