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
    ll n, m, x;
    cin >> n >> m;
    vector<vector<ll>> c(m);
    ll sum[n];
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> x;
            c[j].pb(x);
        }
    }
    ll s = 0;
    for(i=0; i<m; i++)
        sort(c[i].begin(), c[i].end());
    // m vectors now of n size each
    ll ans = 0;
    for(i=0; i<m; i++)
    {
        ll pre[n+1];
        pre[0] = 0;
        for(j=0; j<n; j++)
        {
            ans+=(j*c[i][j]-pre[j]);
            pre[j+1] = pre[j]+c[i][j];
        }
    }
    cout << ans << "\n";
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