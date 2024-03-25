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
    int i, a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
    int j, k;
    for(j=0; j<n && a[j]==j+1; j++)
    {};
    if(j==n)
    {
        cout << 0 << "\n";
        return;
    }
    for(k=n-1; k>=0 && a[k]==k+1; k--)
    {};
    bool check = 0;
    for(i=j; i<=k; i++)
    {
        if(a[i]==i+1)
            check = true;
    }
    if(check)
    {
        cout << 2 << "\n";
        return;
    }
    cout << 1 << "\n";
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