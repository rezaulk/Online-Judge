#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(true)
    {
        scanf("%d",&n);
        int I=1,v=0,x=0,l=0,c=0;
        if(n==0)
        {
            break;
        }
        else
        {
            for(int i=2; i<=n; i++)
            {
                if(i%10==2||i%10==7)
                {
                    I+=2;
                }
                if(i%10==3||i%10==8)
                {
                    I+=3;
                }
                if(i%10==1||i%10==4||i%10==6||i%10==9)
                {
                    I=I+1;
                }
                if(i%10==4||i%10==5||i%10==6||i%10==7||i%10==8)
                {
                    v=v+1;
                }
                if((i>=9 && i<19)||(i>=40 && i<49)||(i>=59 && i<69)||(i>=90 && i<99))
                {
                    x=x+1;
                }
                if((i>=19 && i<29)||i==49||(i>=69&&i<79)||i==99)
                {
                    x=x+2;
                }
                if((i>=29&&i<39)||(i>=79&&i<89))
                {
                    x=x+3;
                }
                if(i==39||i==89)
                {
                    x=x+4;
                }
                if(i>=40&&i<90)
                {
                    l=l+1;
                }
                if(i>=90)
                {
                    c=c+1;
                }
            }
            //printf("%d: %d i, %d v, %d x, %d c\n",n,I,v,x,l,c);
            cout<<n<<": "<<I<<" i, "<<v<<" v, "<<x<<" x, "<<l<<" l, "<<c<<" c"<<endl;
        }
    }
}

