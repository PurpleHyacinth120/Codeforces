#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int metres=0;
	int mini=min(a, min(b,c));
	int mini2=min(a, b);
	if(c==mini && n!=1)
	{
        metres+=mini2+(n-2)*c;
	}
	else
	{
		metres+=(n-1)*mini2;
	}
	cout << metres << "\n";
}