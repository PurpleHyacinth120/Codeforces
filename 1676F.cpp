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
    int n, k;
    cin >> n >> k;
    int a[n];
    int i;
    for(i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    int maxim = INT_MIN;
    int l, x, y, r, j;
    l = r = 0;
    bool check = false;
    int cnt = 0;

    for(i=0; i<n; i++)
    {
        if(a[i]!=a[r]+1)
        {
            if(a[r]-a[l]+1>maxim)
            {
                 maxim = a[r]-a[l]+1;
                x = a[l];
                y = a[r];
            }
            l = j;
        }
        cnt = 0;
        for(j = i; j<n && a[j]==a[i]; j++)
            cnt++;
        i = j-1;
        if(cnt>=k)
        {
            check = true;
            r=j-1;
        }
        else if(check )
        {
            if(a[r]-a[l]+1>maxim)
            {
                maxim = a[r]-a[l]+1;
                x = a[l];
                y = a[j-1];
            }
            l = j;
        }
        if(check && j==n && cnt >=k)
        {
            if(a[r]-a[l]+1>maxim)
            {
                maxim = a[r]-a[l]+1;
                x = a[l];
                y = a[j-1];
            }
            l = j;
        }
    }
    if(check)
        cout << x << " " << y << "\n";
    else
        cout << -1 << "\n";    
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