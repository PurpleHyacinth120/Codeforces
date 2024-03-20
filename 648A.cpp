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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll cnt[m];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j][i]=='*')
            {
                cnt[i] = n-j;
                break;
            }
        }
    }
    ll rise, des;
    rise = des = 0;
    for(i=1; i<m; i++)
    {
        if(cnt[i]>cnt[i-1])
        {
            rise = max(rise, cnt[i]-cnt[i-1]);
        }
        else
            des = max(des, cnt[i-1]-cnt[i]);
    }
    cout << rise << " " << des << "\n";
}