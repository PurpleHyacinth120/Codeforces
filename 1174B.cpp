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
    bool c1, c2;
    c1 = c2 = false;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2)
            c1 = true;
        else
            c2 = true;
    }
    if(c1&&c2)
    {
        sort(a, a+n);
    }
    for(i=0; i<n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
