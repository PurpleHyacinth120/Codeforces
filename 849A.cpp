#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    int i;
    int a[n];
    vi v;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(n%2 && a[0]%2 && a[n-1]%2)
        cout << "Yes\n";
    else
        cout << "No\n";
}