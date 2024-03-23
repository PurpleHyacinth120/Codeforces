#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll b;
    cin >> b;
    ll i, cnt = 0;
    for(i=1; i*i<=b; i++)
    {
        if(b%i==0)
            cnt++;
    }
    i--;
    if(b>1)
    {
        if (i*i==b)
            cnt = cnt*2 -1;
        else 
            cnt *=2;  
    }  
    cout << cnt << "\n";
}