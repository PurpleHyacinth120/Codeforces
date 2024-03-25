#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    int i, cnt = 0;
    for(i=0; i<n; i++)
        cin >> s[i];
    bool check = false;
    vector<bool>flag(n, 1);
    string ans = "";
    string last = "";
    for(i=0; i<n; i++)
    {
        if(!flag[i])
            continue;
        flag[i]= 0;

        reverse(s[i].begin(), s[i].end());
        int k;
        for(k=i+1; k<n; k++)
        {
            if(flag[k] && s[i]==s[k])
                break;
        }
        if(k!=n)
        {
            flag[k]= 0;
            cnt+=2;
        }
        else if(!check)
        {
            string a = s[i];
            reverse(s[i].begin(), s[i].end());
            if(a==s[i])
            {
                last = s[i];
                check = true;
            }
        }
    }
    if(check)
        cnt+=1;
    cout << cnt*m << "\n";
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