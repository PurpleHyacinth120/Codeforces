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
    int a[3];
    cin >> a[0] >> a[1]  >> a[2];
    sort(a, a+3);
    if(a[0]+a[1]<=a[2])
    {
        cout << a[0]+a[1] << "\n";
        return;
    }
    int x = a[0]+a[1] - a[2];
    cout << a[2] +x/2 << "\n";
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