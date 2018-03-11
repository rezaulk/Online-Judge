#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;
    if(x>y-.5)
    {
        printf("%.2f\n",y);
    }
    else
    {
        if(fmod(x,5)==0)
        {
            double z=y-x;
            printf("%.2f\n",z-.5);
        }
        else
        {
            printf("%.2f\n",y);
        }
    }
}
