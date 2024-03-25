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
    int n, x, t;
    cin >> n >> x >> t;
    int dis = 1;
    int ans = 0;
    int start = 0;
    ll last = n*x;
    while(!dis && start<last)
    {
        dis = (t+start)/x - (start)/x;
        ans+=dis;
        start+=x;
    }
    cout << ans << "\n";
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