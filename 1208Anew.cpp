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
	int t;
	cin >> t;
	while(t>0)
	{
		int a, b, n;
		cin >> a >> b >> n;
        int x = a^b;
		if(n%3==2)
			cout << x << "\n";
		else if(n%3==1)
			cout << b << "\n";
		else
			cout << a << "\n";
		t--;
	}
}