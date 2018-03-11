#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int max = x, min=x, c=0;
    for(int i=1; i<n; i++){
        cin >> x;
        if(min > x){
            min = x;
            c++;
        }
        if(max < x){
            max = x;
            c++;
        }
    }
    cout << c;
}
