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
    if(s[0]=='0' && s[1]=='0')
    {
        cout << 12 << ':' << s[3] << s[4] << " AM\n";
        return;
    }
    else if(s[0]=='0'||(s[0]=='1' && s[1]<'2'))
    {
        cout << s << " " << "AM\n";
        return;
    }
    if(s[0]=='1' && s[1]=='2')
    {
        cout << s << " " << "PM\n";
        return;
    }
    string y;
    y+=s[0];
    y+=s[1];
    int x = stoi(y);
    x = x%12;
    string ans = to_string(x);
    if(ans.size()==1)
    {
        string res = "0"+ans;
        cout << res << ':' << s[3] << s[4] << " PM\n";
        return;
    }
    cout << ans << ':' << s[3] << s[4] << " PM\n";
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