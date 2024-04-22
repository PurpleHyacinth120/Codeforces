#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll p = min(n,29LL);
    ll i = 0, sum = k;
    vector<int> ans;
    while(i<p-1)
    {
        ll x = 1LL<<i;
        if(x>sum)
            break;
        else
        {
            ans.push_back(x);
            sum-=x;
        }
        i++;
    }
    ans.push_back(sum);
    n-=i+1;
    for(int j = 0; j<n; j++)
        ans.push_back(0);
    for(auto f:ans)
        cout << f << ' ';
        cout << '\n';
    //cout << ans.size() << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}