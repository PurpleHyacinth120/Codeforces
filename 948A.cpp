#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define pii pair<int, int>
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int R, C;
	cin >> R >> C;
	string a[R];
	int i, j;
	for(i=0; i<R; i++)
		cin >> a[i];
	/*i=0;
	for(j=0; j<C; j++)
	{
		if(a[i][j]=='S'&&(a[i][j-1]=='W'||a[i][j+1]=='W'))
		{
			no
			return 0;
		}
	}
	i=R-1;
	for(j=0; j<C; j++)
	{
		if(a[i][j]=='S'&&(a[i][j-1]=='W'||a[i][j+1]=='W'))
		{
			no
			return 0;
		}
	}*/
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			if(a[i][j]=='S'&&(a[i-1][j]=='W'||a[i+1][j]=='W'||a[i][j+1]=='W'||a[i][j-1]=='W'))
			{
				no
				return 0;
			}
		}
	}
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			if(a[i][j]=='S')
			{
				if(a[i-1][j]=='.')
					a[i-1][j]=='D';
				if(a[i+1][j]=='.')
					a[i+1][j]=='D';
				if(a[i][j+1]=='.')	
					a[i][j+1]=='D';
				if(a[i][j-1]=='.')	
					a[i][j-1]=='D';
			}
		}
	}
    yes
	for(i=0; i<R; i++)
		cout << a[i] << "\n";


}