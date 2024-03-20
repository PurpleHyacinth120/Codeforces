#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    ll x[n];
    int i;
    for(i=0; i<n; i++)
        cin >> x[i];
    int q;
    cin >> q;
    sort(x, x+n);
    while(q>0)
    {
        q--;
        ll m;
        cin >> m;
        auto it = upper_bound(x, x+n, m);
        cout << it - x << "\n";
    }   
}