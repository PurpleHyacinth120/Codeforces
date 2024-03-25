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
    int n, x, i;
    cin >> n;
    int a[n];
    int lim = (n*(n-1))/2;
    int b[lim];
    for(i=0; i<lim; i++)
        cin >> b[i];
    sort(b, b+n);
    a[n-1] = a[n-2];
    for(i=0; i<n; i++)
    {
        cout << a[i] << ' ';
    }
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