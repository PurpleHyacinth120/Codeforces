#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    int i, a[n];
    vi col(k+1, 0);
    vi last(k+1, 0);
    for(i=0; i<n; i++)  
    {
        cin >> a[i];
        int x, y;
        y = last[a[i]];       
        x = i-y-1;
        int z = col[a[i]];
        if(x>z)
            col[a[i]] = x;
        else if(x==z && z!=0)
            col[a[i]]= y+1;    
        last[a[i]] = i+1;
    }
    int mini = INT_MAX;
    for(i=1; i<=k; i++)
    {
        int x, y;
        y = last[i];
        x = n-y;
        if(x>col[i])
            col[i] = x;
        else if(x==col[i])
            col[i]= y+1; 
        mini = min(col[i], mini);
        //cout << col[i] << " " << i << "\n";
    }
    cout << mini << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();
}