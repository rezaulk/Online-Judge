#include<bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int num1=x%10;
    int num2=x/10;
    return num1*10+num2;
}

int main()
{
    string a;
    cin>>a;
    int sum=0,k=0,arr[2];
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!=':')
        {
            sum=sum*10+(a[i]-'0');
        }
        else
        {
            arr[k]=sum;
            sum=0;
            k++;
        }
    }
    arr[k]=sum;
    int num=reverse(arr[0]);
   // cout<<num<<endl;
    if(num==arr[1])
    {
        cout<<0<<endl;
    }
    else
    {
        if(arr[0]==23)
        {
            if(num>arr[1])
            {
                cout<<num-arr[1]<<endl;
            }
            else
            {
                 cout<<60-arr[1]<<endl;
            }

        }
        else
        {
            if(num>arr[1]&&num<60)
            {
                cout<<num-arr[1]<<endl;
            }
            else
            {
                int u=arr[0]+1;
                //cout<<u<<endl;
                if(u<=9)
                {
                    int num1=reverse(u);
                    if(num1<60)
                    {
                        //cout<<num1<<endl;
                        cout<<60-arr[1]+num1<<endl;
                    }
                    else
                    {
                        //cout<<num1<<endl;
                        int u1=u%10;
                        //cout<<u1<<endl;
                        cout<<(10-u1)*60+60-arr[1]+1<<endl;
                    }
                }
                else
                {
                    int num1=reverse(u);
                    if(num1<60)
                    {
                        //cout<<num1<<endl;
                        cout<<60-arr[1]+num1<<endl;
                    }
                    else
                    {
                        //cout<<num1<<endl;
                        int u1=u%10;
                        //cout<<u1<<endl;
                        cout<<(10-u1)*60+60-arr[1]+2<<endl;
                    }
                }

            }

        }
    }
}


