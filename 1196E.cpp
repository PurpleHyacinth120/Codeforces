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
    ll q;
    cin >> q;
    while(q>0)
    {
        q--;
        cout << "YES\n";
        ll b, w;
        cin >> b >> w;
        ll i = 5*1e8+1;
        ll lim = 5*1e8+b;
        for(i-=w; i<=lim; i++)
            cout << 1 << " " << i << "\n";
    }
}