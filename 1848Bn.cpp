#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> //order_of_key(), find_by_order()
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    int i, x;
    vi prev(k+1, -3), ma(k+1), occ(k+1, -3);
    for(i=1; i<=n; i++)
    {
        cin >> x;
        if(occ[x]==-3)
        {
            ma[x] = i-1;
            //prev[x] = INT_MAX;
        }
        else
        {
            int p = i-occ[x]-1;
            if(p>=ma[x])
            {
                prev[x] = ma[x];
                ma[x] = p;
            }
            else
                prev[i] = max(prev[i], p);
        }
        occ[x] = i;
    }
    int ans = INT_MAX;
    for(i=1; i<=k; i++)
    {
        int res;
        if(occ[i]==-3)
            continue;
        if(prev[i]==-3)
        {
            int op1 = max((occ[i]-1)/2, n-occ[i]);
            int op2 = max(occ[i], (n-occ[i])/2);

            res = min(op1, op2);
        }
        else
        {
            int p = n-occ[i];
            if(p>=ma[i])
            {
                prev[i] = ma[i];
                ma[i] = p;
            }
            else
                prev[i] = max(prev[i], p);
            ma[i]/=2;
            res = max(prev[i], ma[i]);
        }
        //cout << i << " " << prev[i] << " " << ma[i] << "\n";
        ans = min(ans, res);
    }
    cout << ans << "\n";
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