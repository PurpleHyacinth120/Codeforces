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
    int64_t n, k, x;
    cin >> n >> k;
    ll l = 0; 
    ll r = n;
    ll m;
    while(l<=r)
    {
        m = l +(r-l)/2;
        if(((m*(m+1))/2 -(n-m))==k)
            break;
        else if(((m*(m+1))/2 -(n-m))>k)
            r = m;
        else if(((m*(m+1))/2 -(n-m))<k)
            l = m;
    }
    // for(x = 1; x<=n; x++)
    // {
    //     int64_t p = (x*(x+1))/2 -(n-x);
    //     if(p==k)
    //         break;
    // }
    cout << n-m << "\n";
}