#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int i=5,sum=0;
        while(i--)
        {
            int k;
            cin>>k;
            if(k==1)
            {
                sum++;
            }

        }
        if(sum==0)
        {
            cout<<"Beginner"<<endl;
        }
         else if(sum==1)
        {
            cout<<"Junior Developer"<<endl;
        }
         else if(sum==2)
        {
            cout<<"Middle Developer"<<endl;
        }
          else if(sum==3)
        {
            cout<<"Senior Developer"<<endl;
        }
          else if(sum==4)
        {
            cout<<"Hacker"<<endl;
        }
        else
        {
            cout<<"Jeff Dean"<<endl;
        }
    }

}
