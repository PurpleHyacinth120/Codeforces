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
    string s;
    cin >> s;
    int n = s.size();
    int i;
    vi st, en;
    for(i=0; i<n; i++)
        if(s[i]=='(')
            st.pb(i+1);
        else
            en.pb(i+1);
    if(en.empty()||st.empty())
    {
        cout << 0 << "\n";
        return;
    }
    int j = en.size()-1;
    i = 0;
    vi ans;
    while(i<st.size() && j>=0 && st[i]<en[j])
    {
        ans.pb(st[i]);
        ans.pb(en[j]);
        i++;
        j--;
    }
    sort(ans.begin(), ans.end());
    if(ans.empty())
    {
        cout << 0 << "\n";
        return;   
    }
    cout << 1 << "\n" << ans.size() << "\n";
    for(auto x: ans)
        cout << x << ' ';
    cout << '\n';
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