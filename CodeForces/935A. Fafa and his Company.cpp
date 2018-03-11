#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
}
