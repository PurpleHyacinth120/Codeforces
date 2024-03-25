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
	int t;
	cin >> t;
	while(t>0)
	{
		t--;
		int n;
		cin >> n;
		ll a[n];
		int i;
		map<int, int>m;
		for(i=0; i<n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		bool check = false;
		for(i=0; i<n; i++)
		{
			if(m[a[i]]<2)
			{
				cout << -1 << "\n";
				check = true;
				break;
			}
		}
        int j, cnt = 0;
		if(!check)
		{
			for(i=0; i<n; )
			{
				cnt = 0;
				for(j=i; j<n && a[j]==a[i]; j++)
				{
					cnt++;
				}
				if(cnt%2)
					for(int k = 0; k <cnt; k++)
					{
						if(k==cnt/2)
						    cout << i+cnt - k-1 << " ";
						else if(k==cnt/2+1)
							cout << i+cnt -k+1<< " ";
						else
							cout << i+cnt-k << " ";
					}
				else
				{
					for(int k = 0; k<cnt; k++)
						cout << i+cnt-k << " ";
				}
				i=j;
			}
			cout << "\n";
		}
	}
}
