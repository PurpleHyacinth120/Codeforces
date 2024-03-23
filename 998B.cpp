#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, b, i;
    cin >> n >> b;
    int a[n];
    for(i=0; i<n; i++)
        cin >> a[i];
    int o, e, sum, ans;
    o = e = sum = ans = 0;
    vi v;
    for(i=0; i<n; i++)
    {
        if(o==e && o!=0)
        {
            if(abs(a[i]-a[i-1])<=b)
            {
                v.pb(abs(a[i]-a[i-1]));
            }
        }
        if(a[i]%2)
            o++;
        else
            e++;
    }
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it!=v.end(); it++)
    {
        if(sum+*it <= b)
        {
            sum+=*it;
            ans++;
        }
        else
            break;
    }
    cout << ans << "\n";
}

    