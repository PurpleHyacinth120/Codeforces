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
    int n, h;
    cin >> n >> h;
    double mul = double(1)/n;
    mul = mul *h *h;
    int i;
    double x0 = 0;
    double x;
    for(i=0; i<n-1; i++)
    {
        x = sqrt(mul + x0*x0);
        cout << setprecision(16) << x << " ";
        x0 = x;
    }
    cout << "\n";
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