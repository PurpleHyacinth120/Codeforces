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
		int n;
		cin >> n;
		ll a[n];
		int i;
        if(n>1)
        {
            ll b[n-1];
            cin >> a[0];
            for(i=1; i<n; i++)
            {
                cin >> a[i];
                b[i-1]=a[i]-a[i-1];
            }
            bool check = true;
            int j=-1;
            for(i=0; i<n-1; i++)
            {
                if(b[i]>0 && b[0]<0)
                {
                    j=-1;
                    check = false;
                    break;
                }
                else if((b[i]<0&& b[0]>0))
                {
                    j=i;
                    break;
                }
            }
            if(j!=-1)
            {
                for(; j<n-1; j++)
                {
                    if((b[j]>0 && b[0]>0)||(b[j]<0 && b[0]<0))
                    {
                        check = false;
                        break;
                    }
                }
            }
            if(check)
                cout << "YES\n";
            else
                cout << "NO\n";


        }
        else
        {
            cin >> a[0];
            cout << "Yes\n";
        }
    }
}
