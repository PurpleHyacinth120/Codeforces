#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n;
    cin >> n;
    int i, j, k, w[2*n];
    for(i=0; i<2*n; i++)
        cin >> w[i];
    sort(w, w+2*n);
    n*=2;
    int best = INT_MAX;
    int minim = 0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            minim = 0;
            for(k=0; k<n; k+=2)
            { 
                if(k==i||k==j)
                    k++;
                if(k==i||k==j)
                    k++;
                if(k>=n)
                    break;
                int prev = w[k];
                //cout << i << " " << j << " " << k << " ";
                if(k+1==i||k+1==j)
                    k++;
                if(k+1==i||k+1==j)
                    k++;
                //cout << k+1 << "\n";
                int next = w[k+1];
                minim+=next-prev;
            }
            best = min(best, minim);
        }
    }
    cout << best << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();
}