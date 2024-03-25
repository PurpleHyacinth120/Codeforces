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
	pair<int, int> a[n];
	int i, x;
	for(i=0; i<n; i++)
	{
		cin >> x;
		a[i].ff = x;
		a[i].ss = i+1;
	}
	sort(a, a+n);
	int cnt = 0;
    int sum = 0;
	for(i=n-1; i>-1; i--)
	{
		sum+= cnt*a[i].ff+1;
		cnt++;
	}
    cout << sum << "\n";
	for(i=n-1; i>-1; i--)
	{
		cout << a[i].ss << " ";
	}
}
