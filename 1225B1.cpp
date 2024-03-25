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
        int n, k, d;
        cin >> n >> k >> d;
        int i;
        int a[n];
        for(i=0; i<n; i++)
            cin >> a[i];
        int mi = INT_MAX;
        for(i=0; i<=n-d; i++)
        {
            set<int>s;
            for(int j = i; j<i+d; j++)
            {
                
                s.insert(a[j]);
            }
            int x = s.size();
            mi = min(mi, x);
        }
        cout << mi << "\n";
    }
}