#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

bool cmp(pii a, pii b)
{
    if(a.ss==b.ss)
        return (a.ff<b.ff);
    return (a.ss<b.ss);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<pii, decltype(cmp)*>s(cmp);
    int n;
    cin >> n;
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
            s.insert({i, j});
    }
    for(auto itr = s.begin(); itr!=s.end(); itr++)
        cout << itr->ff << " " << itr->ss << "\n";
    int cnt = 0;
    cout << "START\n";
    while(!s.empty())
    {
        cnt++;
        pii x = *s.begin();
        cout << x.ff << " " << x.ss << "\n";
        s.erase(s.begin());
        while(true)
        {
            auto it = s.lower_bound({x.ss, 0}, less<pii>);
            if(it==s.end())
                break;
            else
            {
                x = *it;
                cout << x.ff << " " << x.ss << "\n";
                s.erase(it);
            }
        }
    }
    cout << cnt << "\n";
}