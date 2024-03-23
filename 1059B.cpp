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
    int n, m;
    cin >> n >> m;
    int i, j;
    char c;
    vector<vector<char>>v(n+2, vector<char>(m+2, '.'));
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> v[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            int cnt = 0;
            if(v[i][j]=='.')
            {
                if(v[i+1][j]=='#')
                    cnt++;
                if(v[i+1][j-1]=='#')
                    cnt++;
                if(v[i+1][j+1]=='#')
                    cnt++;
                if(v[i][j-1]=='#')
                    cnt++;
                if(v[i][j+1]=='#')
                    cnt++;
                if(v[i-1][j]=='#')
                    cnt++;
                if(v[i-1][j+1]=='#')
                    cnt++;
                if(v[i-1][j-1]=='#')
                    cnt++;
            }
            if(cnt>0 && cnt<8)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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