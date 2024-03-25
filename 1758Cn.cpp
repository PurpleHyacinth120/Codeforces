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
    int n, x;
    cin >> n >> x;
    vi v(n);
    int i;
    v[0] = x;
    v[n-1] = 1;
    if(n==x)
    {
        cout << x << " ";
        for(i=1; i<n-1; i++)
            cout << i+1 << " ";
        cout << 1 << "\n";
        return;
    }
    if(n%x)
    {
        cout << "-1\n";
        return;
    }
    for(i=1; i<n-1; i++)
    {
        if(i==x-1)
            v[i] = n;
        else
            v[i] = i+1;
    }
    while(2*x<n && (n%(v[2*x-1])==0))
    {
        swap(v[x-1], v[2*x-1]);
        x = 2*x;
    }
    for(i=0; i<n; i++)
        cout << v[i] << " ";
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