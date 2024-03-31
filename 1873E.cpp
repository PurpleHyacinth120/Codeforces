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
        int n;
        ll x;
        cin >> n >> x;
        ll a[n];
        int i;
        ll sui = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            sui+=a[i];
        }
        sort(a, a+n);
        ll h=1, sum = 0;
        ll hi;
        while(1)
        {
            sum = 0;
            ll cnt = 0;
            if(h<=a[n-1])
            {
                for(i=0; i<n; i++)
                {
                    if(h>a[i])
                    {
                        sum+=a[i];
                        cnt++;
                    }
                    else
                        break;
                }
                hi = cnt*h - sum;
            }
            else
                hi = n*h - sui;
            if(hi > x)
            {
                cout << h-1 << "\n";
                break;
            }
            h++;
        }
        t--;
    }
}