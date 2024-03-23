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
	int n;
	cin >> n;
	set<set<char>> outer;
	
	int i;
	for(i=0; i<n; i++)
	{
		string s;
		cin >> s;
		int l = s.size();
        int  j;
		set<char> inner;
		for(j=0; j<l; j++)
		{
			inner.insert(s[j]);
		}
		outer.insert(inner);
	}
	cout << outer.size() << "\n";

}