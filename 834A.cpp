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
	int n;
	char a, b;
	cin >> a >> b >> n;
	if(n%4==0||n%4==2)
	{
		cout << "undefined" << "\n";
	}
	else if (n%4==1)
	{
		if(a==118)
			if(b==60)
				cout << "cw\n";
			else 
				cout << "ccw\n";
		else if(a==60)
			if(b==94)
				cout << "cw\n";
			else 
				cout << "ccw\n";
		else if(a==62)
			if(b==118)
				cout << "cw\n";
			else 
				cout << "ccw\n";
		else
			if(b==62)
				cout << "cw\n";
			else 
				cout << "ccw\n";
	}
	else 
	{
		if(a==118)
			if(b==62)
				cout << "cw\n";
			else 
				cout << "ccw\n";
		else if(a==60)
			if(b==118)
				cout << "cw\n";
			else 
				cout << "ccw\n";
		else if(a==62)
			if(b==94)
				cout << "cw\n";
			else 
				cout << "ccw\n";
		else
			if(b==60)
				cout << "cw\n";
			else 
				cout << "ccw\n";
	}
}
	