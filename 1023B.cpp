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
    ll n, k;
    cin >> n >> k;
    if((k<=2*n-1) && (k>=3) )
    {
        if(k<=n)
            cout <<  (k+1)/2 -1 << "\n";
        else
            cout << (2*n-k+1)/2 << "\n";
    }
    else
        cout << 0 << "\n";
}
