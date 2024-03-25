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
	int t;
	cin >> t;
	while(t>0)
	{
		int n, a, q;
		cin >> n >> a >> q;
		int i;
		string s;
		cin >> s;
		int da = a;
		if(da==n)
			cout << "YES" << "\n";
		else
		{
		int plus = 0;
		int minus = 0;
		for(i=0; i<q; i++)
		{
			if(s[i]=='+')
				plus++;
			else
				minus++;
		}
		for(i=0; i<q; i++)
		{
			if(s[i]=='+')
				da++;
			else
				da--;
			if(da==n)
			{
				cout << "YES" << "\n";
				break;
			}
		}
		if(i==q&&da!=n)
		{
			if(minus<=a&&a+plus>=n)
				cout << "MAYBE" << "\n";
			else
				no;
		}
		}
		t--;
	}
}