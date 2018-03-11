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
        int arr[x];

        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        int k=arr[0];
        for(int i=0;i<x;i++)
        {
            if(arr[i]==arr[i+1]||arr[i]==arr[i]+1)
            {
                true;
            }
            else
            {
                break;
            }
        }

    }
}
