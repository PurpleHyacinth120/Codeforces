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
    int n;
    cin >> n;
    int sz = (n*(n-1))/2;
    vi a;
    int b[sz], i;
    for(i=0; i<sz; i++)
        cin >> b[i];
    int cnt = n-1;
    sort(b, b+sz);
    int idx = 0;
    while(cnt)
    {
        a.pb(b[idx]);
        idx+=cnt;
        cnt--;
    }
    a.pb(a.back());
    for(i=0; i<n; i++)
        cout << a[i] << " ";
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