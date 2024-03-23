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
	int n;
	cin >> n;
	int a[n];
	int i;
	for(i=0; i<n; i++)	
		cin >> a[i];
	sort(a, a+n);
    for(i=0; i<n; i++)	
		cout << a[i] << " ";
    cout << "\n";
	if(a[0]==a[n-1])
	{
		if((n%2 && (a[0]*n)%360==0)|| n%2==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else
	{
		int sum = 0;
		for(i=0; i<n; i++)
		{
			if(a[i]>sum)
				sum+=a[i];
			else
				sum-=a[i];
		}
		if(sum%360==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
// 1 8 27 64 125 216
//  7 19 37 61 91
//   12 18 24 30
//     6 6 6 