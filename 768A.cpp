#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll a[n];
	ll i;
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
    /*ll cnt = 0;
    bool plus, minus;
    //plus = minus = false;
    for(i=0; i<n; i++)
    {
        plus = minus = false;
        for(int j=0; j<n; j++)
        {
            if(a[i]>a[j])
                plus = true;
            if(a[i]<a[j])
                minus = true;
            if(plus&&minus)
            {
                cnt++;
                break;
            } 
        }
    }
    cout << cnt << "\n";*/
	sort(a, a+n);
    if((n!=1)&&(a[0]!=a[n-1]))
    {
        ll SEnd=1;
        for(i=n-2; a[i]==a[i+1]; i--)
        {
            SEnd++;
        }
        ll Sbegin =1;
        for(i=0; a[i]==a[i+1]; i++)
        {
            Sbegin++;
        }
	    cout << n-Sbegin-SEnd << "\n";
    }
    else
        cout << 0 << "\n";
}