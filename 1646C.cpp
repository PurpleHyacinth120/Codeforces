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
ll fact[16];

void solve()
{
    ll n, i;
    cin >> n;
    set<ll>s;
    for(i = 2; i<=15; i++)
        s.insert(fact[i]);
    ll x = 1;
    for(i=0; i<42; i++)
        s.insert(x<<i);
    int cnt = 0;
    while(n)
    {
        auto it = s.lower_bound(n);
        if(*it!=n)
            it--;
        n-=*it;
        s.erase(it);
        cnt++;
    }
    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, i;
    t = 1;
    cin >> t;
    fact[0] = 1;
    for(i=1; i<=15; i++)
        fact[i] = fact[i-1]*i;
    while(t--)
        solve();
}