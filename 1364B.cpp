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
    int n;
    cin >> n;
    int a[n];
    vi v;
    int i;
    for(i=0; i<n; i++)
        cin >> a[i];
    v.pb(a[0]);
    int j;
    for(i=1; i<n; )
    {
        j = i;
        if(a[j]<v.back())
        {
            while(j<n && a[j]<a[j-1])
                j++;
            v.pb(a[j-1]);
            i=j;
            continue;
        }
        while(j<n && a[j]>a[j-1])
            j++;
        v.pb(a[j-1]);
        i=j;
    }
    cout << v.size() << "\n";
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
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