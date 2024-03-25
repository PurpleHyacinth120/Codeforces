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
		ll x, n;
		cin >> x >> n;
        if(n==0)
        {}
		else if(n==1)
		{
			if(x%2)
				x+=1;
			else
				x-=1;
		} 
		else
		{
			ll q = (n-1)/4;
			ll r = (n-1)%4;
			if(x%2)
			{
                x+=1;
				x+=4*q;
				if(r==1)
					x-=n-r+1;
				else if(r==2)
					x-=n-r+1+n-r+2;
				else if(r==3)
					x-=n-r;
			}
			else
			{
                x-=1;
				x-=4*q;
				if(r==1)
					x+=n-r+1;
				else if(r==2)
					x+=n-r+1+n-r+2;
				else if(r==3)
					x+=n-r;
			}
		}
        cout << x << "\n";
	}
}
