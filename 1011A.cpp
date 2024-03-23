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
	int n, k;
	cin >> n >> k;
	int i, j, l, m, p;
	string x;
    cin >> x;
	vi v;
	for(i=0; i<n; i++)
	{
        v.push_back(int(x[i]));
	}
    sort(v.begin(), v.end());
    for(l=0; l<n; l++)
    {
        m = 0;
        vi v4k;
        v4k.pb(v[l]);
        for(i=l; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(v[j]-v[i]>1)
                {
                    i=j;
                    m++;
                    if(m<k)
                        v.pb(v[j]);
                    else if(m==k)
                    {
                        for(p=0; p<k; p++)
                            cout << char(v4k[p]);
                        return 0;
                    }
                    break; 
                }
                else 
                    break;
            }
        }
    }
}