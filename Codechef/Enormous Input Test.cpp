#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,j;
    cin>>n>>j;
    int count=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x%j==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

