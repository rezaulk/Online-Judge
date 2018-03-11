#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nap;
    cin>>nap;
    while(nap--)
    {
        int na,u,n;
        cin>>na>>u>>n;
        int ar[na];
        int i=0;
        while(na--)
        {
            int x;
            cin>>x;
            ar[i]=x;
            i++;
        }
        int count=1,ik=0;
        for(int j=0; j<i; j++)
        {
            if(ar[j]<ar[j+1])
            {
                int k=ar[j+1]-ar[j];
                if(k<=u)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            else if(ar[j]>ar[j+1])
            {
                int k=ar[j]-ar[j+1];
                if(k<=n)
                {
                    count++;
                }
                else
                {
                    if(ik==0)
                    {
                        count++;
                        //cout<<j<<endl;
                        ik=1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else if(ar[j]==ar[j+1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
