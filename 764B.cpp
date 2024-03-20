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
    int n;
    cin >> n;
    ll a[n];
    int i;
    for(i=1; i<=n; i++)
        cin >> a[i];
    int lim = (n+1)/2;
    for(i=1; i<=lim; i++)
    {
        if(i%2)
            swap(a[i], a[n-i+1]);
    }
    for(i=1; i<=n; i++)
        cout << a[i] << " ";
}