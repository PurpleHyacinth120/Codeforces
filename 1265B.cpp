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
    int n;
    cin >> n;
    int a[n], i;
    int pre[n];
    cin >> a[0];
    pre[0] = a[0];
    int ans[n];
    for(i=1; i<n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i-1]+a[i];
    }
    for(i=0; i<n; i++)
    {
        if(i-a[i]-2)
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