#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[]={4,7,47,74,77,44,744,447,774,747,474,777,444,477};

    int x;
    cin>>x;
    bool check=false;
    for(int i=0;i<14;i++)
    {
        if(x%data[i]==0)
        {
            check=true;
            break;
        }
    }
    if(check==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
         cout<<"NO"<<endl;
    }
}
