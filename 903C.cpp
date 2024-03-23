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
    int n, i, x, maxim = INT_MIN;
    cin >> n;
    map<int,int>m;
    for(i=0; i<n; i++)
    {
        cin >> x;
        m[x]++;
    }
    auto it = m.begin();
    while(it!=m.end())
    {
        maxim = max(maxim, it->ss);
        it++;
    }
    cout << maxim << "\n";
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