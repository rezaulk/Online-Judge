#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    string s=n;
    reverse(n.begin(),n.end());
    if(n==s)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<s+n<<endl;
    }

}

