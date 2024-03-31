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
		ll n;
        cin >> n;
		ll a[n];
		ll i;
		vector<char> s;
		for(i=0; i<n; i++)
			cin >> a[i];
		
        for(i=0; i<n; i++)
        {
            char yo;
            s.pb(yo);
        }
		ll q;
		cin >> q;
        ll j;
        for(j=0; j<q; j++)
        {
            int tp;
            cin >> tp;
            if(tp==1)
            {
                ll l, r;
                cin >> l >> r;
                for(i=l; i<r+1; i++)
                {
                    if(s[i]=='0')
                        s[i]='1';
                    else
                        s[i]=='0';
                }
            }
            else
            {
                char g;
                cin >> g;
                vector<ll>b;
                for(i=0; i<n; i++)
                {
                    if(s[i]==g)
                    {
                        b.pb(a[i]);
                    }
                }
                ll h;
                if(b.size()==0)
                    h=0;
                else if(b.size()==1)
                    h=b[0];
                else
                {
                    h = b[0] ^ b[1];
                    for(i=2; i<b.size(); i++)
                    {
                        h = h^b[i];
                    }
                }
                cout << h << "\n";
		    }
        }
		t--;
	}
}