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
    int i, a[n], idx = -1;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==1)
            idx = i;
    }
    int l, r;
    l = r = idx;
    string s;
    s.assign(n, '0');
    s[0]  = '1';
    ll sum = 1;
    while(l>0 || r<n-1)
    {
        if(l>=1 && r<n-1)
        {
            sum+=min(a[l-1], a[r+1]);
            if(a[l-1]<a[r+1])
                l--;
            else
                r++;
        }
        else if(l==0)
        {
            sum+=a[r+1];
            r++;
        }
        else
        {
            sum+=a[l-1];
            l--;
        }
        ll m = r-l+1;
        ll num = (m*(m+1))/2;
        if(sum==num)
            s[m-1] = '1';
    }
    cout << s << "\n";
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