#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int i, j, cnt;
    vi v;
    for(i=0; i<=m-n; i++)
    {
        cnt = 0;
        for(j=0; j<n; j++)
        {
            if(t[i+j]!=s[j])
            {
                cnt++;
            }
        }
        v.pb(cnt);
    }
    auto it = min_element(v.begin(), v.end());
    cout << *it << "\n";
    auto x = it - v.begin(); 
    for(j=0; j<n; j++)
    {
        if(s[j]!= t[x])
            cout << j+1 << " ";
        x++;
    }

}