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
    int64_t n;
    int k;
    cin >> n >> k;
    int i;
    int64_t ans2, mi = n;
    int ans;
    for(i=0; i<k; i++)
    {
        int64_t y;
        cin >> y;
        mi = min(mi, n%y);
        if(mi==n%y)
        {
            ans = i+1;
            ans2 = n/y;
        }
    }
    cout << ans << " " << ans2 << "\n";
}