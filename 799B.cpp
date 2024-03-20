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
    int n;
    cin >> n;
    int p[n];
    int i;
    for(i=0; i<n; i++)
        cin >> p[i];
    vector<int> color[3];
    int x;
    map<int, int>m;
    for(i=0; i<n; i++)
    {
        cin >> x;
        color[x-1].pb(p[i]);
        m[p[i]]=x;
    }
    for(i=0; i<n; i++)
    {
        cin >> x;
        if(m[p[i]]!=x)
            color[x-1].pb(p[i]);
    }
    sort(color[0].begin(), color[0].end());
    sort(color[1].begin(), color[1].end());
    sort(color[2].begin(), color[2].end());
    int cust, a = 0, j = 0, k = 0; // a for 1, j for 2, k for 3
    cin >> cust;
    while(cust--)
    {
        cin >> x;
        if(x==1)
            i = a;
        else if(x==2)
            i = j;
        else
            i = k;
        while(i<color[x-1].size() && m[color[x-1][i]]==-1)
            i++;
        if(i==color[x-1].size())
        {
            cout << -1 << " ";
        }
        else
        {
            cout << color[x-1][i] << " ";
            m[color[x-1][i]]=-1;
            i++;
        }            
        if(x==1)
            a=i;
        else if(x==2)
            j=i;
        else
            k=i;
    }
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