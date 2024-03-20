#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

ll fn(int n)
{
    if(n==1)
        return 1;
    else
        return 2*fn(n-1)+1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    ll k;
    cin >> n >> k;
    ll l = 1; 
    ll r = fn(n);
    ll mid;
    ll ans = n;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(k==mid)
            break;
        else if(k>mid)
        {
            l = mid+1;
            ans --;
        }
        else
        {
            r = mid - 1;
            ans--;
        }
    }
    cout << ans << "\n";
}