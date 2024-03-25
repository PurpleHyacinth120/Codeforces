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
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        int n, k;
        cin >> n >> k;
        ll a[n];
        int i;
        for(i=0; i<n; i++)
            cin >> a[i];
        int j, cnt = 0;
        for(i=0; i<n; i=j)
        {
            for(j=i+1; j<n && a[j]>a[j-1]; j++)
            {}
            cnt++;
        }
        // if(i==n-1 && a[n-1]<a[n-2])
        //     cnt++;
        if(cnt<=k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}