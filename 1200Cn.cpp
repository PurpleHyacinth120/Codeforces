#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

void solve(ll n, ll m, ll x, ll y)
{
    ll sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    if(n==1||m==1)
    {
        cout << "YES\n";
        return;
    }
    ll mu, ne;
    if(sx==1 && ex==1)
    {
        if(sy<ey)
            swap(sy, ey);
        ne = (ey+x-1)/x;
        mu = (sy+x-1)/x;
    }
    else if(sx==2 && ex==2)
    {
        if(sy<ey)
            swap(sy, ey);
        ne = (ey+y-1)/y;
        mu = (sy+y-1)/y;
    }
    else
    {
        if(sx==2)// calculate only for 1, 2
            swap(sy, ey);
        ne = (sy+x-1)/x;
        mu = (ey+y-1)/y;
    }        
    if(mu==ne)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, q;
    cin >> n >> m >> q;
    ll hcf = __gcd(n, m);
    ll x, y;
    x = n/hcf;
    y = m/hcf;
    //cout << x << " " << y << "\n";
    while(q--)
        solve(n, m, x, y);
}