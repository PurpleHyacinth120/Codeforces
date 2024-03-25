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
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        int n;
        cin >> n;
        ll a[n];
        int i;
        cin >> a[0];
        ll ma, mi;
        ma = mi = a[0]%2;
        for(i=1; i<n; i++)
        {
            cin >> a[i];
            ma = max(ma, a[i]%2);
            mi = min(mi, a[i]%2);
        }
        if(ma==mi)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
        