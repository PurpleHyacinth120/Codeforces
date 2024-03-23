#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

bool check(string s, int p)
{
    int i;
    int n = s.size();
    for(i = p; i<n; i++)
    {
        if(s[i]!=s[i-p])
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int n, p, i;
    cin >> n >> p;
    string s;
    cin >> s;
    string t = s;
    for(i=p; i<n; i++)
    {
        if(t[i]=='.')
            t[i]=0;
    }
    if(check(t, p))
    {
        cout << t << "\n";
        return;
    }
    for(i=p; i<n; i++)
    {
        if(s[i]=='.' && !t[i-p])
        {
            t[i]=1;
            cout << t << "\n";
            return;
        }
    }
    cout << "NO\n";
    return;
    
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