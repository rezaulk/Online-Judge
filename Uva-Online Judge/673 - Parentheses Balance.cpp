#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getc(stdin);
    while(n--)
    {
        stack<char>mystack;
        char s[140];
        gets(s);
        int loop=strlen(s);
        for(int i=0; i<loop; i++)
        {
            char r;
            r=s[i];
            if(r=='('||r=='[')
            {
                mystack.push(r);
            }
            else if(r==')')
            {
                if(mystack.empty()||mystack.top()!='(')
                {
                    mystack.push('a');
                    break;
                }
                mystack.pop();
            }
            else if(r==']')
            {
                if(mystack.empty()||mystack.top()!='[')
                {
                    mystack.push('a');
                    break;
                }
                mystack.pop();
            }
        }
        if(!mystack.empty())
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }

    }
}
