#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

ll findLowerBound(ll n, ll m, ll lc, ll k)
{
    ll low = 1;
    ll high = LLONG_MAX;
    while(low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll p = mid/n +mid/m -2*(mid/lc);
        if(p>=k)
            high = mid-1;
        else
            low = mid+1;
    }
    return low;
}
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    if(n>m)
        swap(n, m);
    ll lc = lcm(n, m);
    ll ans = findLowerBound(n, m, lc, k);
    cout << ans << "\n";
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