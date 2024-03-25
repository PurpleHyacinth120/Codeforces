#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t>0)
	{
		t--;
		int n, m, x, y, d;
		cin >> n >> m >> x >> y >> d;
		if((x-d<2 && x+d>=n) || (y-d<2&& y+d>=m) || (x-d<2 && y-d<2)||(x+d>=n && y+d>=m))
		{
			cout << -1 << "\n";
		}
		else
			cout << (n+m-2) << "\n";
	}
}