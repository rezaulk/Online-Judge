#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k, count=0, sum=0, minmum=999999999;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }
    for(int j=0; j<n; j++)
    {
        count = 0;
        for(int i=j; i<n;i++)
        {
            count=count + a[i];
            minmum = min(minmum, abs(count+count-sum));
            //cout<<count<<" "<<minmum<<endl;
        }
    }
    cout << minmum;
    return 0;
}
