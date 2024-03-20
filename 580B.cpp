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
    ll n, d, i;
    cin >> n >> d;
    pii a[n];
    for(i=0; i<n; i++)
        cin >> a[i].ff >> a[i].ss;
    sort(a, a+n);
    ll pre[n+1];
    pre[0] = 0;
    ll best = 0;
    for(i=1; i<=n; i++)
        pre[i] = pre[i-1]+a[i-1].ss; 
    for(i=0; i<n; i++){
        ll poor = a[i].ff;
        pii x;
        x.ff = poor+d;
        x.ss = 0; 
        auto it = lower_bound(a, a+n, x);
        int up;
        if(it==a+n)
            up = n;
        else
            up = it-a;
        best = max(best, pre[up]-pre[i]);
    }
    cout << best << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();
}