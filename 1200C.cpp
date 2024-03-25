#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

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
    ll sx, sy, ex, ey;
    //cout << x << " " << y << "\n";
    while(q>0)
    {
        q--;
        cin >> sx >> sy >> ex >> ey;
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
}