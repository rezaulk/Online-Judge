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
        double x,y,z;
        scanf("%lf%lf%lf",&x,&y,&z);
        //printf("%lf",x);
        if(x>50&&y<.7&&5600<z)
        {
            cout<<10<<endl;
        }
        else if(x>50&&y<.7)
        {
            cout<<9<<endl;
        }
         else if(y<.7&&5600<z)
        {
            cout<<8<<endl;
        }
        else if(x>50&&5600<z)
        {
            cout<<7<<endl;
        }
        else if(x>50||y<.7||5600<z)
        {
            cout<<6<<endl;
        }
        else
        {
            cout<<5<<endl;
        }


    }

}




