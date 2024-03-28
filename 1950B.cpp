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
    int n;
    cin >> n;
    
    int i;
    string p[2];
    p[0] = "##";
    p[1] = "..";
    for(i=0; i<n; i++)
    {
        string x;
        if(i&1)
        {
            for(int j = 0; j<n; j++)
            {
                x+=p[!(j&1)];
            }
        }
        else
        {
            for(int j = 0; j<n; j++)
            {
                x+=p[j&1];
            }
        }
        cout << x << "\n"  << x << "\n";
    }
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