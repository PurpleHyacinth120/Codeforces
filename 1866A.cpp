#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    ll i;
    ll x;
    for(i=0; i<n; i++)
    {
        cin >> x;
        a[i] = abs(x);
    }
    sort(a, a+n);
    cout << a[0] << "\n";
}