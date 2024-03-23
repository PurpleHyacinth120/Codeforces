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
    int i, k;
    ll sum = 0;
    ll b[14], a[14];
    for(i=0; i<14; i++)
        cin >> b[i];
    ll maxim = LLONG_MIN;
    for(k=0; k<14; k++)
    {
        sum = 0;
        for(i=0; i<14; i++)
            a[i]=b[i];
        int r = 13-k;
        int j = k+1;
        while((r--)&&a[k]>0)
        {
            a[k]--;
            a[j]++;
            j++;
        }
        ll x, y;
        x = a[k]/14;
        y = a[k]%14;
        a[k]=0;
        for(i=0; i<y; i++)
            a[i]++;
        for(i=0; i<14; i++)
        {
            a[i]+=x;
            if(!(a[i]&1))
                sum+=a[i];
        }
        maxim = max(maxim, sum);
    }
    cout << maxim << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t=1;
    //cin >> t;
    while(t--)
        solve();
}