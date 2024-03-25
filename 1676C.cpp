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
        int n, m;
        cin >> n >> m;
        string a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int i, j, k, mi;
        int moves = 0;
        mi = INT_MAX;
        for(i=0; i<n; i++)
        {
            for( j=i+1; j<n; j++)
            {
                moves = 0;
                for(k=0; k<m; k++)
                    moves+=abs(a[i][k]-a[j][k]);
                mi = min(mi, moves);
            }
        }
        cout << mi << "\n";
    }
}