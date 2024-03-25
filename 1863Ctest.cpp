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
	ll t;
	cin >> t;
	while(t>0)
	{
		ll n, k;
		cin >> n >> k;
		ll a[n];
		ll i, j;
		for(i=0; i<n; i++)
        {
			cin >> a[i];
        }
		while(k>0)
		{
            k--;
			for(i=0; i<n; i++)
			{
				for(j=0; j<=n; j++)
				{
                    auto it = find(a, a+n,j);
					if(it==a+n)
					{
                        a[i]=j;
                        break;
                    }
				}
			}
		}
		for(i=0; i<n; i++)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
		t--;
	}
}