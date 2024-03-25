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
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        int n;
        cin >> n;
        ll a[n];
        int i;
        for(i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        if(n==1)
            cout << a[0] << "\n";
        else
        {
            ll ma = LLONG_MIN;
            ll b[n];
            b[0]=a[0];
            ma = max(b[0], ma);
            for(i=1; i<n; i++)
            {
                b[i]=a[i]-a[i-1];
                ma = max(ma, b[i]);
            }
            cout << ma << "\n";
        }
    }
}