#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int na;
        cin>>na;
        int ar[na];
        int i=0;
        while(na--)
        {
            int x;
            cin>>x;
            int xa=x-7;
            if(xa%10!=0)
            {
                ar[i]=x;
                 i++;
            }

        }
        for(int j=0;j<i;j++)
        {
            cout<<ar[j]<<" ";
        }
        cout<<endl;

    }


}
