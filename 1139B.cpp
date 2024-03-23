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
    int i;
    for(i=0; i<n; i++)
        cin >> a[i];
    ll x = a[n-1];
    ll sum = a[n-1];
    for(i=n-2; i>-1; i--)
    {
        if(x==1)
            break;
        if(a[i]<x)
        {
            x = a[i];
            sum+=x;
        }
        else if(a[i]>=x)
        {
            x = x-1;
            sum+=x;
        }
    }
    cout << sum << "\n";
}