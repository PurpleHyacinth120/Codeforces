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
	ll t;
	cin >> t;
	while(t>0)
	{
	    string str;
		cin >> str;
		ll x = str.size();
		ll i;
		ll da = 0;
		for(i=0; i<x; i++)
		{
			if(str[i]=='+')
				da++;
			else if(str[i]=='-')
				da--;
			else if(str[i]=='0'&& da<2)
			{
					no
					break;
			}
			else 
			{
				int k = da;
				int plus, minus;
				plus = minus = 0;
                ll j=i+1;
				for(j=i+1; j<x; j++)
				{
					if(str[j]!='-')
					{
						break;
					}
					else
						k--;
				}
				int o=j;
				for(o=j; (str[o]=='+'||str[o]=='-'); o++)
				{
					if(str[o]=='+')
					{
						plus++;
						k++;
					}
					else
					{
						minus++;
						k--;
					}
				}
				if((minus-plus>=0) && (str[o]!=str[i]))
				{
					no
					break;
				}
				else if(i==x)
					yes

			}
		}
		t--;
	}
}