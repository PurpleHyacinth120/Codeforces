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
	int n, m;
	cin >> n >> m;
	int rem = n-m;
	if(m==0)
		cout << 1 << "\n";
	else if(n-m<m)
		cout << n-m << "\n";
	else
		cout << m << "\n";
}