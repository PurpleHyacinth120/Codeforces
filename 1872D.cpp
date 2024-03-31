#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ll t;
    cin >> t;
    while(t>0)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll a = lcm(x, y);
        ll b = n/a;
        ll m = n/x - b;
        ll o = n/y -b;
        ll sum =0;
        ll i;
        if(m>0)
        {
            ll u = ((n*(n+1))/2) - (((n-m)*(n-m+1))/2);
            sum+= u;
        }
        if(o>0)
        sum-=((o*(o+1))/2);
        cout << sum << "\n";
        t--;
    }
}