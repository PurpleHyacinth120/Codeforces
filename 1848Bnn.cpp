#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
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
    vi ma(k+1), pre(k+1, -1), occ(k+1, -1);
    int i, x;
    for(i=1; i<=n; i++)
    {
        cin >> x;
        if(occ[x]==-1)
            ma[x] = i-1;
        else
        {
            int p = i-occ[x]-1;
            if(p>=ma[x])
            {
                pre[x] = ma[x];
                ma[x] = p;
            }
            else
                pre[x] = max(p, pre[x]);
        }
        occ[x] = i;
    }
    int ans = INT_MAX;
    for(i=1; i<=k; i++)
    {
        if(occ[i]==-1)
            continue;
        
        int res;
        if(pre[i]==-1)//only 1 occurence of that color
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
                pre[i] = ma[i];
                ma[i] = p;
            }
            else
                pre[i] = max(p, pre[i]);
            
            res = max(ma[i]/2, pre[i]);
        }
        ans = min(res, ans);
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