#include<bits/stdc++.h>
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
    int n, l, r;
    cin >> n >> l >> r;
    ll lgp = 1+  2*(pow(2,l-1)-1);
    ll rgp = 1+2*(pow(2,r-1)-1);
    ll msum = lgp + (n-l);
    ll mxsum = rgp +(n-r)*(pow(2, r-1));
    cout << msum << " " << mxsum << "\n";
}

