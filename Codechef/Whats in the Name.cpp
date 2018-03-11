#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int arr[1000];

int wordcount(string s)
{
    int p=0,k=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            arr[k]=i;
            k++;
            p++;
        }
    }
    return p;
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin , str);
        int s=wordcount(str);
        if(s==0)
        {
            char x=str[0];
            if('a'<x&&'z'>x)
            {
                char d=toupper(str[0]);
                cout<<d;
            }
            else
            {
                 cout<<str[0];
            }
            for(int i=1; i<str.size(); i++)
            {
                char da=tolower(str[i]);
                cout<<da;
            }
        }
        else
        {
            char da=toupper(str[0]);
            cout<<da<<". ";
            if(s==1)
            {
                int a=0;
                int ji=s-2;
                for(int i=0; i<ji; i++)
                {
                    int w=arr[i];
                    w=w+1;
                    char d=toupper(str[w]);
                    cout<<d<<". ";
                    a=i;
                }
                int wa=arr[a];
                wa=wa+1;
                char d=toupper(str[wa]);
                cout<<d;
                for(int i=wa+1; i<str.size(); i++)
                {
                    char da=tolower(str[i]);
                    cout<<da;
                }
            }
            else
            {
                int a=0;
                int ji=s-2;
                //cout<<ji<<arr[0]<<endl;
                for(int i=0; i<ji; i++)
                {
                    int w=arr[i];
                    w=w+1;
                    char d=toupper(str[w]);
                    cout<<d;
                    a=i;
                }
                a=a+1;
                int wa=arr[a];
                wa=wa+1;

                //cout<<"dd"<<d<<endl;
                if(str[wa]==' ')
                {
                     cout<<". ";
                }
                else
                {
                    char d=toupper(str[wa]);
                     cout<<d<<". ";
                }

                for(int i=wa+1; i<str.size(); i++)
                {
                    char da=tolower(str[i]);
                    cout<<da;
                }
            }
        }
        cout<<endl;
    }
}
