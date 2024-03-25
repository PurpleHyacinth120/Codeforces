#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

bool check(int j, int i, int n)
{
    if(j==i)
        return true;
    if(n/j>1)
        return true;
    return false;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vi v(n+1);
    v[1] = x;
    v[n] = 1;
    int i;
    vector<bool>flag(n+1, true);
    flag[x] = flag[1] = flag[0] = false;
    for(i=2; i<n; i++)
    {
        int j;
        for(j = i; j<=n; j+=i)
        {
            if(!flag[j])
                continue;
            if(check(j, i, n))
                break;
        }
        if(j<=n && flag[j] && check(j, i, n))
        {
            flag[j] = false;
            v[i] = j;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    for(i=1; i<=n; i++)
        cout << v[i] << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();
}