#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

bool cmp(pair<ll, ll> a, pair<ll, ll>b)
{
    return a.ss<b.ss;
}
void solve()
{
    ll n;
    cin >> n;
    ll i;
    pair<ll, ll> a[n];
    for(i=0; i<n; i++)
        cin >> a[i].ff >> a[i].ss;
    sort(a, a+n, cmp);
    ll j, k;
    j = 0;
    k = n-1;
    ll items = 0;
    ll sum = 0;
    while(j<=k)
    {
        while( j<=k && k>=0)
        {
            if(items+a[k].ff<=a[j].ss)
            {
                items+=a[k].ff;
                sum+=2*a[k].ff;
                k--;
            }
            else if(items+a[k].ff>a[j].ss)
            {
                ll dif = a[j].ss-items;
                a[k].ff-= dif;
                items = a[j].ss;
                sum+=2*dif;
                break;
            }
        }
        while(j<=k && j<n && a[j].ss<=items)
        {
            items+=a[j].ff;
            sum+=a[j].ff;
            j++;
        }
    }
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    while(t--)
        solve();
}