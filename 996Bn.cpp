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
    int y, i, x, b, best;
    best = INT_MAX;
    int j = -1;
    for(i=0; i<n; i++)
    {
        cin >> x;
        y = max(x-i, 0);
        b = (y+n-1)/n;
        if(b<best)
        {
            best = b;
            j = i+1;
        }
    }
    cout << j << "\n";    
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