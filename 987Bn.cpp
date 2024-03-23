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
    ll x, y;
    cin >> x >> y;
    double p = x/log(x);
    double q = y/log(y);
    if(p>q)
        cout << "<\n";
    else if(p<q)
        cout << ">\n";
    else
        cout << "=\n";
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