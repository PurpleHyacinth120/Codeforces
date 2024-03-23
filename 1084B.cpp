#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    ll s;
    cin >> n >> s;
    ll a[n];
    int i;
    ll mini = LLONG_MAX;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        mini = min(a[i], mini);
    }
    ll sum = 0;
    for(i=0; i<n; i++)
        sum+=a[i]-mini;
    if(sum>=s)
        cout << mini << "\n";
    else
    {
        ll req = s-sum;
        ll rem = n*mini;
        if(rem<req)
            cout << -1 << "\n";
        else
        {
            ll ans = (rem-req)/n;
            cout << ans << "\n";
        }
    }
}