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
    int n;
    cin >> n;
    ll a[n];
    vi flag(n, 1);
    int i, j;
    for(i=0; i<n; i++)
        cin >> a[i];
    int x = n-2;
    for(i=n-1; i>0; i--)
    {
        if(x>=i)
            x=i-1;
        for(j=x; j>=0 && a[i]>=i-j; j--)
        {
            flag[j] = 0;
            x = j;
        }
    }
    int cnt = 0;
    for(i=0; i<n; i++)
    {
        if(flag[i])
            cnt++;
    }
    cout << cnt << "\n";
}