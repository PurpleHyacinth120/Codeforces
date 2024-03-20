#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n, c, i;
    cin >> n >> c;
    ll a[n], s = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    ll b = LLONG_MAX, su = 0;
    for(i=0; i<n; i++)
    {
        su = min(a[i], su+a[i]);
        b = min(su, b);
    }
    if(c==0)
    {
        ll p = s;
        if(b<0)
            p-=b;
        cout << p << "\n"; 
        return;
    }
    if(c>0)
    {
        ll best = LLONG_MIN, sum = 0;
        for(i=0; i<n; i++)
        {
            sum = max(a[i], sum+a[i]);
            best = max(sum, best);
        }
        ll ans;
        if(best>0)
            ans = best*(c-1);
        else
            ans = 0;
        ll res = ans+s;
        cout << res << "\n";
    }
    else
    {
        ll best = LLONG_MAX, sum = 0;
        for(i=0; i<n; i++)
        {
            sum = min(a[i], sum+a[i]);
            best = min(sum, best);
        }
        ll ans;
        if(best<0)
            ans = best*(c-1);
        else
            ans = 0;
        ll res = ans+s;
        cout << res << "\n";
    }
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