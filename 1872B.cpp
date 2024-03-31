#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        int n;
        cin >> n;
        vector<pair<int,int>> d(n);
        int x, y;
        int i;
        for(i=0; i<n; i++)
        {
            cin >> d[i].ff >> d[i].ss;            
        }
        sort(d.begin(), d.end());
        set<int> k;
        for(i=0; i<n; i++)
        {
            x = (2*d[i].ff +d[i].ss -1)/2;
            k.insert(x);
        }
        cout << *k.begin() << "\n";

        t--;
    }
}