#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    char minim = 123;
    for(i=0; i<n; i++)
    {
        minim = min(minim, s[i]);
    }
    int ansk = 1;
    vi pos;
    for(i=0; i<n; i++)
    {
        if(s[i]==minim)
            pos.pb(i);
    }
    string ans = s;
    for(int x: pos)
    {
        int k = x+1;
        string t = s;
        int tot = n-k+1;
        for(i=0; i<tot; i++)
        {
            t[i] = s[(i+k-1)%n];
        }
        int rem = k-1;
        if(tot&1)
        {
            for(i=tot; i<n; i++)
            {
                t[i] = s[rem-1];
                rem--;
            }
        }
        else
        {
            int j = 0;
            for(i=tot; i<n; i++)
            {
                t[i] = s[j];
                j++;
            }
        }
        if(t<ans)
        {
            ans = t;
            ansk = k;
        }
    }
    cout << ans << "\n" << ansk << "\n";
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