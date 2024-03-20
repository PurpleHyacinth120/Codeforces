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
	string s;
	cin >> s;
	int n = s.size();
	char c[]={'B', 'u', 'l', 'b', 'a', 's', 'r'};
	vi cnt(7, 0);
	int i;
	for(i=0; i<n; i++)
	{
		for(int j = 0; j<7; j++)
		{
			if(s[i]==c[j])
				cnt[j]++;
		}
	}
	cnt[1]=cnt[1]/2;
	cnt[4]=cnt[4]/2;
	int mi = INT_MAX;
	for(int j=0; j<7; j++)
		mi = min(mi, cnt[j]);
	cout << mi << "\n";
}