#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        stack<char>c;
       //getline(cin,s);
       cin>>s;
       int sum=0;
       FOR(i,0,s.length())
       {
           if(s[i]=='<')
           {
               c.push(s[i]);
           }
           else if(s[i]=='>')
           {
               if(!c.empty())
               {
                       c.pop();
               }
               else
                break;
               if(c.empty())
               {
                   sum=i+1;
               }
           }
       }
       cout<<sum<<endl;
    }
}


