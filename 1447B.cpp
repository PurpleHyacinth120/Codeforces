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
    int n, m;
    cin >> n >> m;
    int a[n*m];
    int i, j;
    int neg = 0;
    int pos = 0;
    int xer = 0;
    vi ne;
    for(i=0; i<n*m; i++)
    {
        cin >> a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
        {
            neg++;
            a[i]=-a[i];
        }
        else
            xer++;
    }
    int x = *min_element(a, a+n*m);
    ll sum = 0;
    for(i=0; i<n*m; i++)
    {
        sum+=a[i];
    }
    if(neg&1)
    {
        sum-=2*x;
    }
    //cout << x<< "\n";
    cout << sum << "\n";    
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