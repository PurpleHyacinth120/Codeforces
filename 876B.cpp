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
    int n, k, m;
    cin >> n >> k >> m;
    int a[n];
    int i;
    map<int, int>ma;
    bool check = false;
    int j = -1;
    int rem = -1;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(check)
            continue;
        int x = a[i]%m;
        if(ma[x]==k-1)
        {
            check = true;
            j = i;
            rem = x;
        }
        ma[x]++;
    }
    if(!check)
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    for(i=0; i<=j; i++)
    {
        if(a[i]%m==rem)
            cout << a[i] << " ";
    }
    cout << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();
}