#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m , k;
    cin >> n >> m >> k;
    int a[n+2];
    a[0]=a[n+1]=101;
    int i;
    int x=m+101, y=m+101;
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(i=m-1; i>=0; i--)
    {
        if(a[i]>0 && a[i]<=k)
        {
            x=i;
            break;
        }
    }
    for(i=m+1; i<=n+1; i++)
    {
        if(a[i]>0 && a[i]<=k)
        {
            y=i;
            break;
        }
    }
    int p = min(abs(y-m), abs(m-x));
    cout << 10*p << "\n";
}
