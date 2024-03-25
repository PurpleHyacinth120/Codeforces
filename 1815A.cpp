#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    ll i;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(n&1)
    {
        cout << "YES\n";
        return;
    }
    for(i=1; i<n-1; i++)
    {
        if(a[i]<a[i-1])
        {
            ll dif = a[i-1]-a[i];
            a[i]+=dif;
            a[i+1]+=dif;
        }
    }
    bool check = false;
    if(a[n-1]<a[n-2])
    {
        check = true;
    }
    for(i=n-1; i>1; i--)
    {
        if(a[i]<a[i-1])
        {
            ll dif = a[i-1]-a[i];
            a[i-1]-=dif;
            a[i-2]-=dif;
        }
    }
    if(a[0]>a[1])
        check = true;
    else
        check= 0;
    if(!check)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();
}