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
    int h, w;
    cin >> h >> w;
    int i, j;
    int r[h], c[w];
    for(i=0; i<h; i++)
        cin >> r[i];
    for(i=0; i<w; i++)
        cin >> c[i];
    vector<vector<int>>v(h, vector<int>(w, -1));
    for(i=0; i<h; i++)
    {
        for(j=0; j<r[i]; j++)
        {
            v[i][j]=1;
        }
        if(j<w)
            v[i][j]=0;
    }
    for(i=0; i<w; i++)
    {
        for(j=0; j<c[i]; j++)
        {
            if(v[j][i]==0)
            {
                cout << "0\n";
                return;
            }
            v[j][i]=1;
        }
        if(j<h)
        {
            if(v[j][i]==1)
            {
                cout << 0 << "\n";
                return;
            }
            v[j][i]=0;
        }
    }
    int cnt = 0;
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            if(v[i][j]==-1)
                cnt++;
        }
    }
    ll ans = 1;
    ll div = 1e9+7;
    for(i=0; i<cnt; i++)
    {
        ans = (ans*2)%div;
    }
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