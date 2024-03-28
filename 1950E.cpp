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

void factors(int x, vi &res) 
{
    int i = 1;
    while(i*i <= x) 
    {
        if(x % i == 0) 
        {
            res.push_back(i);
            if(x/i != i) 
                res.push_back(x/i);
        }
        i++;
    }
}

void solve()
{
    vi res;
    int n;
    string s;
    cin >> n;
    cin >> s;
    factors(n, res);
    sort(all(res));
    // for(auto u:res)
    //     cout << u << " ";
    // cout << "\n";
    for(int i=0; i<res.size(); i++)
    {
        int cnt = 0;
        string k = s.substr(0,res[i]);
        vi ct(res[i], 0);

        for(int j = res[i]; j<n; j+=res[i])
        {
            for(int p=0; p<res[i]; p++)
            {
                if(s[j+p]!=k[p])
                    ct[p]++;
            }
        }
        bool check = 0;
        int nu = -1;
        for(int l=0; l<res[i]; l++)
        {
            if(ct[l])
            {
                cnt++;
                if(check)
                    break;
                nu = l;
                check = 1;
            }
        }
        int other = n/res[i];
        if(!check||(cnt==1 && ct[nu]==1))
        {
            cout << res[i] << "\n";
            return;
        }
        if((cnt==1 && ct[nu]==other-1))
        {
            bool c2 =1 ;
            int d = nu+res[i];
            for(int h=d;h<n; h+=res[i])
            {
                if(s[h]!=s[d])
                {
                    c2 = 0;
                    break;
                }
            }
            if(c2)
            {
                cout << res[i] << "\n";
                return;
            }
        }
    }
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