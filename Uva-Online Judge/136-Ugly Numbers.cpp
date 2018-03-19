#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coun=1;
    for(int i=2;i<1000000;i++)
    {
        if(i%2==0||i%3==0||i%5==0)
        {
            coun++;
            if(coun==1500)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
}
