#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int n;
    cin >> n;
    int i;
    ll a[2*n];
    for(i=0; i<2*n; i++)
        cin >> a[i];
    sort(a, a+2*n);
    if(a[0]==a[2*n-1])
        cout << -1 << "\n";
    else
    for(i=0; i<2*n; i++)
        cout << a[i] << " ";
    cout << "\n";
}