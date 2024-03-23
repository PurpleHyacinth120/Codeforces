#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, p;
    string s;
    int i;
    cin >> n >> p >> s;
    for(i=0; i<n-p; i++)
    {
        if(s[i]=='.')
        {
            if(s[i+p]=='1')
                s[i]='0';
            else if(s[i+p]=='0')
                s[i] = '1';
            else
            {
                s[i]='0';
                s[i+p]='1';
            }
            break;
        }
        else if(s[i+p]=='.')
        {
            if(s[i]=='0')
                s[i+p]='1';
            else
                s[i+p]='0';
            break;
        }
        else if(s[i]^s[i+p])
        {
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=='.')
            s[i]='0';
    }
    bool check = true;
    for(i=0; i<n-p; i++)
        if(s[i]!=s[i+p])
            check = false;
    if(check)
        cout << "NO\n";
    else
        cout << s << "\n";
}