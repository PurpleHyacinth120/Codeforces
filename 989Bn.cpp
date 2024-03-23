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
    int n, p;
    cin >> n >> p;
    string a, s;
    cin >> a;
    s = " " +a;
    if(n==p)
    {
        cout << "No\n";
        return;
    }
    int i, j;
    int div = n/p;
    int rem = n%p;
    bool check = false;
    for(i=0; !check && i<div-1; i++)
    {
        for(j = i*p+1; j<=(i+1)*p; j++)
        {
            if(s[j]=='.')
            {
                if(s[j+p]=='0')
                    s[j]='1';
                else if(s[j+p]=='1')
                    s[j]='0';
                else
                {
                    s[j]='0';
                    s[j+p]='1';
                }
                check = true;
                //cout << j << " @^^ " << check << "\n";
                break;
            }
            else
            {
                if(s[j]!=s[j+p] && s[j+p]!='.')
                {
                    check = true;
                    //cout << j << " #^^ " << check << "\n";
                    break;
                }
            }
        }
    }
    for(i=(div-1)*p +1; !check && i<=(div-1)*p+rem; i++)
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
                //cout << i << " !^^ " << check << "\n";
                break;
            }
        else
        {
            if(s[i]!=s[i+p])
            {
                check = true;
                //cout << i << " *^^ " << check << "\n";
                break;
            }
        }
    }
    for(i=(div-1)*p+rem+1; !check && i<=n; i++ )
    {
        if((i-p)>0 && s[i]=='.')
        {
            if(s[i-p]=='0')
                s[i]='1';
            else if(s[i-p]=='1')
                s[i]='0';
            else
            {
                s[i]='0';
                s[i-p]='1';
            }
            check = true;
            //cout << i << " (^^ " << check << "\n";
            break;
        }
        else if(i-p>0)
        {
            if(s[i]!=s[i-p])
            {
                check = true;
                //cout << i << " %^^ " << check << "\n";
                break;
            }
        }
    }
    if(check)
    {
        for(i=1; i<=n; i++)
        {
            if(s[i]=='.')
            {
                s[i]='0';
            }
            cout << s[i];
        }
        cout << "\n";
        return;
    }
    cout << "No\n";
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
// cout << i << " ^^^ " << check << "\n";