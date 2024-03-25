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
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        int n, i;
        cin >> n;
        ll a[n];
        int pos = 0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]>0)
                pos++;
        }
        if(n==1||n==pos)
            cout << 1 << "\n";
        else if(pos==0)
            cout << n << "\n";
        else 
        {
            int sure = n-pos;
            sort(a, a+n);
            ll nmi = LLONG_MAX;
            for(i=1; i<n && a[i]<=0; i++ )
                nmi= min(nmi, abs(a[i]-a[i-1]));
            auto it = lower_bound(a, a+n, nmi);
            //cout << *it << "\n";
            if(it!=a+n && *it!=nmi)
                it--;
            else if(it==a+n)
                it = a+n-1;
            int ans;
            if(*it<=0)
                ans = sure;
            else
                ans = sure+1;
            cout << ans << "\n";
        }

    }
}