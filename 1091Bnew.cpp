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
    int n;
    cin >> n;
    //min for first, max for second
    int i, x, y;
    pii mi = {INT_MAX, INT_MAX}, ma={INT_MIN, INT_MIN};
    for(i=0; i<n; i++)
    {
        cin >> x >> y;
        if(mi.ff>x)
            mi = {x, y};
        else if(mi.ff==x && mi.ss>y)
            mi.ss =y;
    }
    for(i=0; i<n; i++)
    {
        cin >> x >> y;
        if(ma.ff<x)
            ma = {x, y};
        else if(ma.ff==x && ma.ss<y)
            ma.ss =y;
    }
    cout << mi.ff +ma.ff << " " << mi.ss +ma.ss << "\n";
}
