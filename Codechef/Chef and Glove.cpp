#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int a[x],b[x];
        for(int i=0; i<x; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<x; i++)
        {
            cin>>b[i];
        }
        int k=1;
        bool sor=true,check=true;
        for(int i=0; i<x; i++)
        {
            if(b[i]>=a[i])
            {
                if(b[i]=a[i])
                {
                    k++;
                }
                sor=true;
                continue;
            }
            else
            {
                sor=false;
                break;
            }
        }
        if(sor==true||k==x)
        {
            if(k==x)
            {
                cout<<"both"<<endl;
                //return 0;
            }
            else
            {
                reverse(b[0],b[x]);
                for(int i=0; i<x; i++)
                {
                    if(b[i]=a[i])
                    {
                        check=true;
                    }
                    else
                    {
                        cout<<"front"<<endl;
                        ///return 0;
                    }
                }
                if(check==true)
                {
                    cout<<"back"<<endl;
                }
            }

        }
        else
        {
            cout<<"none"<<endl;

        }
    }
}
