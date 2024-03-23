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
    int n, k;
    cin >> n >> k;
    char x;
    vi v;
    int i, j, cnt=0;
    set<int>s;
    for(i=0; i<n; i++)
    {
        cin >> x;
        v.pb(int(x)-64);
    }
    for(i=1; i<=k; i++)
    {
        cnt = 0;
        for(j=0; j<n; j++)
        {
            if(v[j]==i)
                cnt++;
        }
        s.insert(cnt);
    }
    cout << *(s.begin())*k << "\n";

}