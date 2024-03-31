#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    int i, j;
    if(m==1)
    {
        for(i=0; i<=n; i++)
            cout << 0 << "\n";
        return;
    }
    if(n==1)
    {
        cout << 2 << "\n";
        for(i=0; i<m; i++)
            cout << i << ' ';
        cout << "\n";
        return;
    }
    cout << m << "\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<m; j++)
        {
            cout << j << ' ';
        }
        cout << "\n";
    }
    int cnt = 1;
    for(i=2; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout << (cnt+j)%m << ' ';
        }
        cout << '\n';
        cnt++;
    }
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