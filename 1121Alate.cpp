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
	int n, m, k;
	cin >> n >> m >> k;
	set<int> s[m];
	int p[n], sn[n];
	int i;
	for(i=0; i<n; i++)
		cin >> p[i]; 
	for(i=0; i<n; i++)
		cin >> sn[i];
	for(i=0; i<n; i++)
		s[sn[i]-1].insert(p[i]);
    set<int>strong;
    for(i=0; i<m; i++)
        strong.insert(*s[i].rbegin());
	int x, cnt = 0;
	for(i=0; i<k; i++)
	{
		cin >> x;
		if(!binary_search(strong.begin(), strong.end(), p[x-1]))
            cnt++;
	}
	cout << cnt << "\n";
}