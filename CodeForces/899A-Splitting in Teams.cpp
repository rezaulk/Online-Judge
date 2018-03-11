#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,one=0,two=0;
   cin>>n;
   while(n--)
   {
       int a;
       cin>>a;
       if(a==1)
       {
           one++;
       }
       else
        {
        two++;
       }
   }
   if(two>=one)
   {
       cout<<one<<endl;
   }
   else if(one>two&&two>0)
   {
       cout<<two<<endl;
   }
   else if(one>2)
   {
        cout<<one/3<<endl;
   }
   else
   {
       cout<<0<<endl;
   }
}
