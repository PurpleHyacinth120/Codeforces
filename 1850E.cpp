#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

void solve()
{
    ll n, c;
    cin >> n >> c;
    ll x;
    int i;
    ll sumsq=0;
    ll b = 0;
    for(i=0; i<n; i++)
    {
        cin >> x;
        c-=(x*x);
        b +=x;
    }
    b = b;
    c = -c;
    ll a = 2*n;
    ll res = b*b-n*c;
    ll dis = sqrt(res);
    ll ans1 = (-b+dis)/(a);
    ll ans2 = (-(b)-dis)/(a);
    if(ans2>0)
        cout << ans2 << "\n";
    else
        cout << ans1 << "\n";
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