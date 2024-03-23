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
	int n, a, b;
	int se[2]={0,1};
	cin >> n >> a >> b;
	int s[n], i;
	int x = min(a,b);
    int lim;
    if(n%2)
        lim = floor(n/2);
    else
        lim = n/2 -1;
	int sum =0;
    for(i=0; i<n; i++)
        cin >> s[i];
	for(i=0; i<=lim; i++)
	{
		if(s[i]==s[n-i-1] && s[i]==2)
			if(i==n-i-1)
                sum+=x;
            else
                sum+=2*x;
		else if((s[i]==0) && s[n-1-i]==1)
		{
				cout << -1 << "\n";
				break;
		}
        else if((s[i]==1) && s[n-1-i]==0)
		{
				cout << -1 << "\n";
				break;
		}
		else if(s[i]==0 && s[n-1-i]==2)
		{
			sum+=a;
		}
		else if(s[i]==1 && s[n-1-i]==2)
		{
			sum+=b;
		}
		else if(s[i]==2 && s[n-1-i]==0)
		{
			sum+=a;
		}
		else if(s[i]==2 && s[n-1-i]==1)
		{
			sum+=b;
		}
	}
	if(i==1+lim)
		cout << sum << "\n";
}