#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,count=0,max=0,index,i,j;
        scanf("%d%d",&x,&y);
        for(i=x;i<=y;i++)
        {
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    count++;
                    if(i/j!=j)
                    {
                        count++;
                    }
                }
            }
            if(max<count)
            {
                max=count;
                index=i;
            }
            count=0;
        }
        cout<<"Between "<<x<<" and "<<y<<", "<<index<<" has a maximum of "<<max<<" divisors."<<endl;
    }
}
