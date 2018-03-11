#include<iostream>

using namespace std;
int main()
{
	int n,k;
	cin>>n;
	while(n--)
	{
	    string s;
	    cin>>s;
	    int d=s.size();
	    if(s[d-2]=='i'&&s[d-1]=='c')
        {
            if(s[0]=='h'&&s[1]=='y'&&s[2]=='d'&&s[3]=='r'&&s[4]=='o')
            {
                cout<<"non-metal acid"<<endl;
            }
             else
            {
                cout<<"polyatomic acid"<<endl;
            }
        }
        else
        {
           cout<<"not an acid"<<endl;
        }

	}
}

