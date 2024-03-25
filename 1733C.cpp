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
    int i, a[n];
    cin >> a[0];
    for(i=1; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<a[i-1])
        {
            cout << i << " " << i+1 << "\n";
        }    
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