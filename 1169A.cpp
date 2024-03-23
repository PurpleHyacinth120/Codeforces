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
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	int st1= a, st2 = b;
	while(st1!=x && st2!=y)
	{
        if (st1==n)
			st1=1;
		else
			st1++;
		if(st2==1)
			st2=n;
		else
			st2--;
        if(st1==st2)
		{
			yes
			break;
	    }
        else if(st1==x || st2==y)
			no
    }
    
}
