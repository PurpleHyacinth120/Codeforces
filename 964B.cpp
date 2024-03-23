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
    int n, a, b, c, t;
    cin >> n >> a >> b >> c >> t;
    if(b>=c)
    {
        cout << n*a << "\n";
        return 0;
    }
    int ti[n];
    int i;
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> ti[i];
        sum+=t-ti[i];
    }
    ll ans = n*a + (c-b)*sum;
    cout << ans << "\n";
} 
