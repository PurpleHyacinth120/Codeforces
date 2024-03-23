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
    int n, p, i;
    cin >> n >> p;
    string s;
    cin >> s;
    int mul = 0;
    bool check = false;
    if(n==p)
    {
        cout << "NO\n";
        return;
    }
    while(!check && (mul)*p < n)
    {
        int rem = n-(mul+1)*p;
        if(rem>=p)
            rem = (mul+1)*p;
        else
            rem = mul*p+rem;
        for(i=mul*p; i<rem; i++)
        {
            if(s[i]=='.')
            {
                if(s[i+p]=='0')
                    s[i]='1';
                else if(s[i+p]=='1')
                    s[i]='0';
                else
                {
                    s[i]='0';
                    s[i+p]='1';
                }
                check = true;
            }
            else if(s[i+p]!='.' && s[i]!=s[i+p])
                check = true;
        }
        mul++;
    }
    int l = n%p;
    if(l==0)
        l=p;
    for(i=n-l; i<n; i++)
    {
        if(s[i]=='.')
        {
            if(s[i-p]=='0')
                s[i]='1';
            else
                s[i]='0';
            check = true;
        }
    }
    if(check)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]=='.')
                s[i]='0';
        }
        cout << s;
        return;
    }
    //cout << s;
    cout << "NO\n";    
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