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
        int xyz,rez;
        string state;
        cin>>xyz>>state;
        int laddu=0;
        while(xyz--)
        {
            string str;
            cin>>str;
            if(str=="CONTEST_WON")
            {
                int won;
                cin>>won;
                laddu=300;
                if(won<20)
                {
                    laddu+=20-won;
                }
            }
            else if(str=="TOP_CONTRIBUTOR")
            {
                laddu+=300;
            }
            else if(str=="BUG_FOUND")
            {
                int bug;
                cin>>bug;
                laddu+=bug;
            }
            else
            {
                laddu+=50;
            }
        }
        if(state=="INDIAN")
        {
           rez=laddu/200;
        }
        else
        {
            rez=laddu/400;
        }
        cout<<rez<<endl;
    }
    return 0;
}





