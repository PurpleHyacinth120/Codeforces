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
        ll n, k;
        cin >> n >> k;
        ll sum = 0, cnt = 0, m =0;
        ll minim = INT32_MAX;

        ll a[n];
        int i, j;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            minim = min(minim, a[i]);
        }
        if(minim <= k)
            m=1;
        
        ll h[n];
        for(i=0; i<n; i++)
            cin >> h[i]; 

        for(i=0; i<n-1; i++)
        {
            sum = a[i];
            cnt = 1;
            if(h[i]%h[i+1]==0 && sum <=k)
            {
                j = i;
                while(j<n-1 && h[j]%h[j+1]==0 && sum<=k)
                {
                    sum += a[j+1];
                    j++;
                    if(sum <= k)
                        cnt++;
                }
                m = max(m, cnt);
            }
        }       
        cout << m << "\n";   
        t--;
    }
}