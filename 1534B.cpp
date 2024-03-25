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
    ll t;
    cin >> t;
    while(t>0)
    {
        ll n;
        cin >> n;
        ll a[n+2];
        a[0]=a[n+1]=0;
        ll i, cnt = 0, hit = 0;
        for(i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]>a[i+1]&& a[i]>a[i-1])
            {
                cnt+= a[i]-max(a[i-1],a[i+1]);
                a[i]=max(a[i-1],a[i+1]);
            }
            hit+=abs(a[i]-a[i-1]);
        }
        cout << hit + cnt +a[n] << "\n";
        t--;
    }
}
// 0 1 1 0