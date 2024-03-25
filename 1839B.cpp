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
    int t;
    cin >> t;
    while(t>0)
    {
        int n;
        cin >> n;
        int i;
        vector<pair<ll, ll>>v(n);
        ll x, y;
        for(i=0; i<n; i++)
        {
            cin >> x >> y;
            v[i].ff = x;
            v[i].ss = y;
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        ll sum = 0;
        while(v.size())
        {
            int p = v.begin()->ff; 
            auto l = v.begin();
            auto r = v.end();
            auto m = v.end();
            while(l<r)
            {
                m = l + (r-l)/2;
                if(((m)->ff)>p)
                    r = m;
                else
                    l = m+1;
            }
            l--;
            sum+=((l)->ss);
            cout << l->ss << "****\n";
            cnt++;
            if(cnt>=(l)->ff)
            {
                auto it = l+1 - v.begin();
                cnt= cnt - it;
                v.erase(v.begin(), l+1);  
            }
            else
                v.erase(l);
        }
        cout << sum << "\n";
        t--;
    }
}