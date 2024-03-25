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
		string s;
		cin >> s;
		int i, x, y;
		for(i=0; i<9; i++)
		{
			if(s[i]=='1')
			{
				x = i;
			}
			else if(s[i]=='3')
			{
				y = i;
			}
        }
			if(x>y)
				cout << 31 << "\n";
			else
				cout << 13 << "\n";
	t--;
	}
}