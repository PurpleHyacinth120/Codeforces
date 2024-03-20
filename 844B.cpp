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
    ll n, m;
    cin >> n >> m;
    int i, j;
    ll ans;
    int cnt = 0;
    ans = 0;
    int a[n][m];
    for(i=0; i<n; i++)
    {
        cnt = 0;
        for(j=0; j<m; j++)
        {
            cin >> a[i][j];
            if(a[i][j])
                cnt++;
        }
        ans+=(1LL<<cnt) + (1LL<<(m-cnt));
        ans-=2;
    }
    for(i=0; i<m; i++)
    {
        cnt = 0;
        for(j=0; j<n; j++)
        {
            if(a[j][i])
                cnt++;
        }
        ans+= (1LL<<cnt)+ (1LL<<(n-cnt));
        ans-= 2;
    }
    ans-=m*n;
    cout << ans << "\n";
}