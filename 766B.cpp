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
    ll a[n];
    int i;
    for(i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    bool check = false;
    for(i=0; i<n-2; i++)
        if((a[i]+a[i+1])>a[i+2])
        {
            check = true;
            break;
        }
    if(check)
        cout << "YES\n";
    else
        cout << "NO\n";
}