#include<bits/stdc++.h>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int bottles[6];
int count_movement(int a,int b,int c)
{
    int m=0;
    for(int i=0;i<9;i++)
    {
        if(i!=a&&i!=b&&i!=c)
        {
            m+=bottles[i];
        }
    }
    return m;
}

int main()
{
    while(scanf("%d",&bottles[0])!=EOF)
    {
        for(int i=1;i<9;i++)
        {
            scanf("%d",&bottles[i]);
        }

        int mov[6];
        int min_mov=INT_MAX;
        char str[3];
        char combinations[6][3+1]={"BCG","BGC","CBG","CGB","GBC","GCB"};

        mov[0]=count_movement(0,5,7);
        mov[1]=count_movement(0,4,8);
        mov[2]=count_movement(2,3,7);
        mov[3]=count_movement(2,4,6);
        mov[4]=count_movement(1,3,8);
        mov[5]=count_movement(1,5,6);

        for(int i=0;i<6;i++)
        {
            if(mov[i]<min_mov)
            {
                min_mov=mov[i];
                strcpy(str,combinations[i]);

            }
        }
        cout<<str<<" "<<min_mov<<endl;
    }
}
