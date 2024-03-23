#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

string sum(string s, string t)
{
    string res = "";
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    int i, j;
    i = j = 0;
    int c = 0;
    while(i<s.size()||j<t.size())
    {
        if(i<s.size()&& j<t.size())
        {
            int x = s[i]-96+t[j];
            if(c)
                x++;
            int a = x%10;
            // cout << a;
            res+=to_string(a);
            c = x/10;
            i++;
            j++;
        }
        else if(i==s.size())
        {
            int x = t[j]-48;
            if(c)
                x++;
            int a = x%10;
            // cout << a;
            res+=to_string(a);
            c = x/10;
            j++;
        }
        else if(j==t.size())
        {
            int x = s[i]-48;
            if(c)
                x++;
            int a = x%10;
            // cout << a;
            res+=to_string(a);
            c = x/10;
            i++;
        }
        
    }
    if(c)
        res+="1";
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v;
    int i;
    for(i=1; i<n; i++)
    {
        if(s[i]-'0')
            v.pb(i);
    }
    vector<pii> ne;
    int minim = INT_MAX;
    for(i=0; i<v.size(); i++)
    {
        int x = abs(2*v[i]-n);
        ne.pb({x, v[i]});
    }
    //cout << " ****************************************************\n";
    sort(ne.begin(), ne.end());
    if(ne.size()==1 || ne[0].ff!=ne[1].ff)
    {
        cout << sum(s.substr(0, ne[0].ss), s.substr(ne[0].ss ));
    }
    
    if(ne[0].ff==ne[1].ff)
    {
        string k = sum(s.substr(0, ne[0].ss), s.substr(ne[0].ss ));
        string l = sum(s.substr(0, ne[1].ss), s.substr(ne[1].ss ));
        // cout << k << "\n";
        // cout << l << "\n";
        if(k<l)
            cout << k << "\n";
        else
            cout << l << "\n";
    }
}