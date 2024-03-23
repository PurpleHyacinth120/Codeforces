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
    bool c1, c2;
    c1 = c2 = false;
    if(n==1 && s!="1")
    {
        cout << "NO\n";
        return;
    }
    if(n==2 && s=="00")
    {
        cout << "NO\n";
        return;
    }
    for(i=0; i<n-2 && !c1; i++){
        int cnt = 0;
        for(int j = 0; j<3; j++){
            if(s[i+j]=='0')
                cnt++;
        }
        if(cnt==3)
            c1 = 1;
    }
    for(i=0; i<n-1 && !c2; i++)
    {
        int cnt = 0;
        for(int j = 0; j<2; j++)
        {
            if(s[i+j]=='1')
                cnt++;
        }
        if(cnt==2)
            c2 = 1;
    }
    string p, q;
    if(n>=3)
    {
        p = s.substr(0, 3);
        q = s.substr(n-3, 3);
        if(p=="001"||q=="100")
        {
            cout << "No\n";
            return;
        }
    }
    if(c1||c2)
        cout << "No\n";
    else   
        cout << "Yes\n";
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