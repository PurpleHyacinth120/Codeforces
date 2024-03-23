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
    ll n, m, k;
    cin >> n >> m >> k;
    int b[n];
    vl diff, difs;
    int i;
    cin >> b[0];
    for(i=1; i<n; i++)
    {
        cin >> b[i];
        diff.pb(b[i]-b[i-1]);
        //cout << difs[i-1] << " ";
    }
   // cout << "\n";
    if(k>=n)
    {
        cout << n << "\n";
        return;
    }
    ll sum = 0;
    sort(diff.begin(), diff.end());
    //cout << x << "\n";
    for(i=0; i<n-k; i++)
    {
        sum+=diff[i];
    }
    sum+=k;
    cout << sum << "\n";
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