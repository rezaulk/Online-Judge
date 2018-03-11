#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int i=5,count=0;
        while(x/i>=1)
        {
            count+=x/i;
            i=i*5;
        }
        cout<<count<<endl;
    }
    return 0;
}






