#include<bits/stdc++.h>
using namespace std;

int main()
{
    double m,n;
    cin>>n>>m;
    double min=9999999,z;
    for(int i=0;i<n;i++)
    {
        double a,b;
        cin>>a>>b;
        if(a<=min)
        {
            z=a/b;
            min=a;
            //cout<<z<<endl;
        }

    }
    cout<<setprecision(8)<<z*m<<endl;
}
