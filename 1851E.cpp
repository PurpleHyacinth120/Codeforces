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
    int n, k;
    cin >> n >> k;
    ll c[n+1];
    int i;
    for(i=1; i<=n; i++)
        cin >> c[i];
    int p[k];//unlimited
    for(i=0; i<k; i++)
    {
        cin >> p[i];
        c[p[i]] = 0;
    }
    vl ans;
    for(i=1; i<=n; i++)
    {
        int x, y;
        cin >> x;
        if(c[i]==0)
        {
            ans.pb(0);
            continue;
        }
        if(x==0)
        {
            ans.pb(c[i]);
            continue;
        }
        ll sum = 0;
        for(int j = 0; j<x; j++)
        {
            cin >> y;
            sum+=c[y]; 
        }
        ans.pb(min(sum, c[x]));
    }  
    for(i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
    cout << "\n"; 
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