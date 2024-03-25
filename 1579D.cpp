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
    int n;
    cin >> n;
    pii a[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin >> a[i].ff;
        a[i].ss = i+1;
    }
    sort(a, a+n);
    vector<pii>b;
    for(i=0; i<n; i++)
        b.pb(a[i]);
    int j = n-1;
    i = 0;
    if(a[n-1].ff==0)
    {
        cout << 0 << "\n";
        return;
    }
    while(!a[i].ff)
        i++;
    int p = i;
    ll sum = 0;
    while(i<j)
    {
        a[j].ff-=a[i].ff;
        sum+=a[i].ff;
        i++;
        if(a[j].ff==0)
            j--;
    }
    j= n-1;
    i = p;
    cout << sum << "\n";
    while(i<j)
    {
        cout << a[i].ss << " " << a[j].ss << "\n";
        a[j].ff-=a[i].ff;
        sum+=a[i].ff;
        i++;
        if(a[j].ff==0)
            j--;
    }

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