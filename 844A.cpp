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
	string s;
	cin >> s;
	set<char>so;
	for(int i=0; i<s.size(); i++)
		so.insert(s[i]);
	int k;
	cin >> k;
	if (s.size()<k)
		cout << "impossible\n";
	else if(so.size()>=k)
		cout << 0 << "\n";
	else
		cout << k- so.size() << "\n";
}