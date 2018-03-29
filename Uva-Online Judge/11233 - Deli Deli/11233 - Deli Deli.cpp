#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    string a[x][2];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<y; i++)
    {
        string s;
        bool check=false;
        cin>>s;
        for(int j=0; j<x; j++)
        {
            if(s==a[j][0])
            {
                check=true;
                cout<<a[j][1]<<endl;
            }
        }
        if(check==false)
        {
            int si=s.size();
            //cout<<"no"<<endl;
            if(s[si-1]=='y')
            {
                if(s[si-2]!='a'&&s[si-2]!='e'&&s[si-2]!='i'&&s[si-2]!='o'&&s[si-2]!='u')
                {
                    for(int m=0; m<si-1; m++)
                    {
                        cout<<s[m];
                    }
                    cout<<"ies"<<endl;
                }
                else
                {
                    for(int m=0; m<si; m++)
                    {
                        cout<<s[m];
                    }
                    cout<<"s"<<endl;
                }
            }
            else if(s[si-1]=='o'||s[si-1]=='s'||(s[si-1]=='h'&&s[si-2]=='c')||(s[si-1]=='h'&&s[si-2]=='s')||s[si-1]=='x')
            {
                if((s[si-1]=='h'&&s[si-2]=='c')||(s[si-1]=='h'&&s[si-2]=='s'))
                {
                    for(int l=0; l<si; l++)
                    {
                        cout<<s[l];
                    }
                    cout<<"es"<<endl;
                }
                else
                {
                    for(int l=0; l<si; l++)
                    {
                        cout<<s[l];
                    }
                    cout<<"es"<<endl;
                }
            }
            else
            {
                for(int k=0; k<si; k++)
                {
                    cout<<s[k];
                }
                cout<<"s"<<endl;
            }
            check=true;
        }
    }
}
