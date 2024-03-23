#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll hcf = __gcd(x, y);
    x/=hcf;
    y/=hcf;
    cout << min(a/x, b/y);
}