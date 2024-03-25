#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
const ll MOD = 1e9+7;

__int128 binpow(__int128 a, __int128 b) {
    a %= MOD;
    __int128 res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

__int128 newfn(__int128 a, __int128 b){
    __int128 lo = 1;
    for(__int128 i=2; i<=b; i++)
        lo = lo*i;
    __int128 ans = 1;
    for(__int128 j = 0; j<b; j++)
    {
        if(lo==1)
            ans = (ans*(a+j))%MOD;
        else
            ans = ans*(a+j);
        __int128 hcf = __gcd(ans, lo);
        ans/=hcf;
        lo/=hcf;
    }
    return ans%MOD;
}

void solve()
{
    __int128 n, m, i;
    
    ll ans = 0;
    for(i=n; i>0; i--){
        //cout << i << " " << n-i+1 << "\n";
        __int128 temp = (newfn(i, m)*binpow(n-i+1, m-1))%MOD;
        ans = (ans+temp)%MOD;
    }
    cout << ans << "\n";
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