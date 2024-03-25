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
	int t;
	cin >> t;
	while(t>0)
	{
		string s;
        int i;
        cin >> s;
		for(i=0; i<(s.size()-1); i++)
		{
			if(s[i]==s[i+1] && s[i]!='\?')
            {
				cout << -1 << "\n";
                break;
            }
		}
		if(i==s.size()-1)
		{
			for(i=0; i<(s.size()-1); i++)
			{
				if(s[i]=='\?')
				{
					if(i==0)
					{
						if(s[i+1]=='a')
							s[i]=='c';
						else if(s[i+1]=='b')
							s[i]=='a';
						else if(s[i+1]=='c')
							s[i]=='b';
					}
					else if(i==(s.size()-2))
					{
						if(s[i-1]=='a')
							s[i]=='c';
						else if(s[i-1]=='b')
							s[i]=='a';
						else if(s[i-1]=='c')
							s[i]=='b';
					}
					else if(s[i-1]='a' && s[i+1]=='b')
						s[i] =='c';
					else if(s[i-1]='b' && s[i+1]=='a')
						s[i] == 'c';
					else if(s[i-1]='b' && s[i+1]=='c')
						s[i] == 'a';
					else if(s[i-1]='c' && s[i+1]=='b')
						s[i] == 'a';
					else if(s[i-1]='a' && s[i+1]=='c')
						s[i] == 'b';
					else if(s[i-1]='c' && s[i+1]=='a')
						s[i] == 'b';
					else if(s[i+1]=='\?')
					{	
						if(s[i-1]=='a')
							s[i]=='b';
						else if(s[i-1]=='b')
							s[i]=='c';
						else if(s[i-1]=='c')
							s[i]=='a';
						else 
							s[i]=='a';
					}
					
				}

			}
		}
        cout << s << "\n";
        t--;
	}
}