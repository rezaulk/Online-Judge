#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x,y,z,caseo=1;
    while(cin>>x>>y>>z)
    {
        if(x==0&&y==0&&z==0)
        {
            break;
        }
        cout<<"Case "<<caseo<<":"<<endl;
        int loop=x*z+y*(z+1);
        for(int i=0; i<z; i++)
        {
            for(int j=0; j<y; j++)
            {
                for(int j=0; j<loop; j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
            for(int ji=0; ji<x; ji++)
            {
                for(int jo=0; jo<z; jo++)
                {
                    for(int jm=0; jm<y; jm++)
                    {
                        cout<<"*";
                    }
                    for(int jn=0; jn<x; jn++)
                    {
                        cout<<".";
                    }
                }
                for(int jn=0; jn<y; jn++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        for(int j=0; j<y; j++)
        {
            for(int j=0; j<loop; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
        caseo++;
    }
}

