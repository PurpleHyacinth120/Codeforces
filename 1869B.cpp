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
ll abso (ll a, ll b)
{
    if(a>b)
        return a-b;
    else 
        return b-a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t>0)
    {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        pair<ll, ll> ar[n];
        ll i;
        for(i=0; i<n; i++)
        {
            cin >> ar[i].ff >> ar[i].ss;
        }
        if(a<=k && b<=k)
            cout << 0 << "\n";
        else if(a<=k && b>k)
        {
            ll dis[k];
            for(i=0; i<k; i++)
            {
                dis[i]= abso(ar[b-1].ff , ar[i].ff) + abso(ar[b-1].ss , ar[i].ss);
            }
            sort(dis, dis+k);
            cout << dis[0] << "\n";
        }
        else if (b<=k && a>k)
        {
            ll dis[k];
            for(i=0; i<k; i++)
            {
                dis[i]= abso(ar[a-1].ff , ar[i].ff) + abso(ar[a-1].ss , ar[i].ss);
            }
            sort(dis, dis+k);
            cout << dis[0] << "\n";
        }
        else
        {
            ll dis1[k], dis2[k];
            for(i=0; i<k; i++)
            {
                dis1[i]= abso(ar[a-1].ff , ar[i].ff) + abso(ar[a-1].ss , ar[i].ss);
                dis2[i]= abso(ar[b-1].ff , ar[i].ff) + abso(ar[b-1].ss , ar[i].ss);
            }
            sort(dis1, dis1+k);
            sort(dis2, dis2+k);
            ll x = dis1[0] + dis2[0]; 
            ll y = abso(ar[a-1].ff , ar[b-1].ff) + abso(ar[a-1].ss , ar[b-1].ss);
            cout << min(y, x) << "\n";
        }
        t--;
    }
}