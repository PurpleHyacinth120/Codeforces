#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
   int n , m;
   cin >> n >> m;
   vector<set<int>> v(n+1);
   int i, x, y;
   for(i=0; i<m; i++)
   {
        cin >> x >> y;
        v[x].insert(y);
        v[y].insert(x);
   }
   int l , r, j;
   l = r = 1;
   ll ans = 0;
   for(i=1; i<=n; i++)
   {
        j = l;
        auto it = lower_bound(v[i].begin(), v[i].end(),j);
        if(it!=v[i].end() && *it<r)
        {
            int no = r-l;
            cout << no << "$$\n";
            ans+=no*no;
            while(it!=v[i].end() && *it<r)
            {
                j = *it +1;
                it = lower_bound(v[i].begin(), v[i].end(),j);
            }
            l = j;
        }
        r++;
   }
   if(i==n+1 && r>=l)
   {
        int no = r-l;
        cout << no << "##\n";
        ans+=(no*(no-1))/2;
   }
   cout << ans << "\n";    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t=1;
    cin >> t;
    while(t--)
        solve();
}
//
// 2 1
// 2 1

// 2 0

// 3 3
// 1 2
// 1 3
// 2 3

// 3 2
// 1 2
// 3 1

// 3 2
// 1 2
// 2 3

// 3 1
// 2 1

// 3 2
// 3 1
// 2 3

// 3 1
// 1 3

// 3 1
// 2 3
// 3 0
// 4 6
// 1 2
// 1 3
// 4 1