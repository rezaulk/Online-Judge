#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    int count=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        int a=sqrt(x);
        if(a*a!=x)
        {
           v.push_back(x);
           count++;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[count-1]<<endl;
}
