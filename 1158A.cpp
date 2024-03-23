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
    ll a[n], b[m], x;
    int i;
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<m; i++)
    {
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    ll sum = 0;
    if(a[n-1]>b[0])
    {
        cout << -1 << "\n";
        return 0;
    }
    if(a[n-1]!=b[0])
    {
        //need a[n-1] to be the minimum, so if it is not equal to that
        //need to take that explicitly
        //sum up 1 to m-1 in b
        //take 0 to n-1 of a now, take their minimums
        //now to consider 
        for(i=1; i<m; i++)
            sum+=b[i];
        sum+=a[n-1];
        for(i=0; i<n-1; i++)
            sum+=m*a[i];
        sum-=a[n-2];
        sum+=b[0];
    }
    else
    {
        for(i=0; i<m; i++)
            sum+=b[i];
        for(i=0; i<n-1; i++)
            sum+=m*a[i];
    }
    cout << sum << "\n";
}