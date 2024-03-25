#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    string s, t;
    cin >> s >> t;
    int i, j, k, m;
    i = k = 0;
    while(i<s.size())
    {
        j = i;
        int cnt = 0;
        while(s[j]==s[i])
        {
            cnt++;
            j++;
        }
        i = j;
        int cntn = 0;
        while(t[k]==s[j-1])
        {
            k++;
            cntn++;
        }
        if((cntn<cnt )|| (i==s.size()&& k!=t.size()))
        {
            cout << "NO\n";
            return;
        }          
    }
    cout << "YES\n";
    return;
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