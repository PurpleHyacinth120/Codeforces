#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    int i, j;
    int r[h];
    int c[w];
    for(i=1; i<=h; i++)
        cin >> r[i];
    for(i=1; i<=w; i++)
        cin >> c[i];
    ll cnt = 0;
    for(i=1; i<=h; i++)
    {
        for(j=1; j<=w; j++)
        {
            if((r[i]<j-1) && (c[j]<i-1))
                cnt++;
        }
    }
    const ll mo = 1000000007;
    ll ans = (1LL << cnt)%mo;
    cout << ans << "\n";
}