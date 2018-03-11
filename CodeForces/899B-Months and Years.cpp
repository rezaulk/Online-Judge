#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,one=0,two=0;
    int ar[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bool check=false;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(j==1)
        {

        }
        if(a[i]==ar[j])
        {
          check=true;
          if(j==12)
          {
              j=0;
          }
          cout<<a[i]<<" "<<ar[j]<<" "<<i<<" "<<j<<endl;
           j++;
        }
        else
        {
            check=false;
            i=0;
            j--;
            cout<<a[i]<<" "<<ar[j]<<endl;
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

