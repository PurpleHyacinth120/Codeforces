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
	int l = 0;
	int i;
    int a[n];
	for(i=0; i<n; i++)
		cin >> a[i];
	int cnt = 0;
	for(i=0; i<n-1; i++)
	{
		if((a[i]+1)!=a[i+1])
		{
			if(i-l>2 && a[l]==1)
			{
                cnt+=i-l;
                cout << i << " " << l << " " << cnt << "^^\n";
            }
			else if(i-l>2)
            {
				cnt+=i-l-1;
                cout << i << " " << l << " " << cnt << "&&\n"; 
            }
			l = i+1;
		}
	}
    cout << cnt << " %\n";
	if((i-l>1)&&(a[n-1]-a[l]==i-l))
    {
		cnt+=i-l;
        cout << "here(())\n";
    }
	cout << cnt << "\n";
}