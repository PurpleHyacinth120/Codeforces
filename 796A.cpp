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
	int n, m, k;
	cin >> n >> m >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int x, y;
	x = y = n-1;
	for (int i = m; i < n; i++)
	{
		if(a[i] <=k && a[i]!=0)
		{
			x = i;
			break;
		}
	}
	for (int i = m-2; i >= 0; i--)
	{
		if(a[i] <=k && a[i]!=0)
		{
			y = i;
			break;
		}
	}
	int b = abs(x+1-m);
	int c =abs(m-1-y);
	cout << 10*(min(b,c)) << "\n";
}