#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,j;
    cin>>n;
    while(n--)
    {
        char x;
        cin>>x;
        if(x=='B'||x=='b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(x=='C'||x=='c')
        {
            cout<<"Cruiser"<<endl;
        }
         else if(x=='D'||x=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(x=='F'||x=='f')
        {
            cout<<"Frigate"<<endl;
        }

    }

}



