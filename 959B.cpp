#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, m;
    cin >> n >> k >> m;
    vector<string>v(n);
    int i;
    for(i=0; i<n; i++)
    {
        string str;
        cin >> str;
        v[i]=str;
    }
    map<string, ll>maps;
    for(i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        maps[v[i]]=x;
    }
    for(i=0; i<k; i++)
    {
        vi ne;
        int x, j, q;
        cin >> x;
        ll mi = LLONG_MAX;
        for(j = 0; j<x; j++)
        {
            cin >> q;
            ne.pb(q-1);
            mi = min(mi, maps[v[q-1]]);
        }
        for(auto l: ne)
        {
            maps[v[l]] = mi;
        }
    }
    ll sum = 0;
    for(i=0; i<m; i++)
    {
        string str;
        cin >> str;
        sum+=maps[str];
    }
    cout << sum << "\n";    
}