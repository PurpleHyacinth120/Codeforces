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
    int n, m , h;
    cin >> n >> m >> h;
    int a[m], b[n];
    int i;
    for(i=0; i<m; i++)
        cin >> a[i];
    for(i=0; i<n; i++)
        cin >> b[i];
    int ans[n][m];
    int j, x;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> x;
            if(!x)
                ans[i][j]=0;
            else
                ans[i][j]=min(a[j], b[i]);
            cout << ans[i][j] << " ";
        }
        cout << "\n";
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