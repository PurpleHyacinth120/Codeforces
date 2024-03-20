#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
const ll inf = 1e12;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<ll, ll>>>v(n);
    vector<ll>d(n, inf);
    vector<ll>p(n, -1);
    ll i;
    for(i=0; i<m; i++)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        v[x-1].pb({y-1, w});
        v[y-1].pb({x-1, w});
    }
    set<pair<ll, ll>>s;
    d[0] = 0;
    s.insert({0, 0});
    for(i=1; i<n; i++)  
        s.insert({inf, i});
    while(!s.empty())
    {
        ll vertex = s.begin()->ss;
        ll dis = s.begin()->ff;
        for(pair<ll, ll> x:v[vertex])
        {
            ll to = x.ff;
            ll weight = x.ss;
            ll ch = weight+dis;
            if(ch<d[to])
            {
                auto it = s.find({d[to], to});
                d[to] = weight+dis;
                p[to] = vertex;
                s.erase(it);
                s.insert({d[to], to});
            }
        }
        s.erase(s.begin());
    }
    vll ans;
    ll x = n-1;
    if(p[x]==-1)
    {
        cout << -1 << "\n";
        return 0;
    }
    while(x!=0)
    {
        ans.pb(x);
        x = p[x];
    }
    ans.pb(0);
    for(i=ans.size()-1; i>=0; i--)
    {
        cout << ans[i]+1 << " ";
    }
    cout << "\n";
}