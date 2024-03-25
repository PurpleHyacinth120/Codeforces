#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        int n;
        cin >> n;
        vi v;
        int a[n], b[n];
        int i, j;
        for(i=0; i<n; i++)
            cin >> a[i];
        for(i=0; i<n; i++)
        {
            cin >> b[i];
            //v.pb(b[i]-a[i]);
        }
        int x;
        int cnt = 0;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                x=b[i]-a[i];
                cnt++;
                for(j=i; (b[i]-a[i])+a[j]==b[j]; j++)
                {
                    /*if(v[j]!=v[j+1])
                    {
                        i=j+1;
                        break;
                    }*/     
                }
                i=j-1;
            }
        }
        if(cnt==1 && x>0)
        {
            //cout << cnt << "\n";
            //cout << x << '\n';
            yes
        }
        else if (cnt==0)
        {
            //cout << cnt << "\n";
            //cout << x << '\n';
            yes
        }
        else
        {
           // cout << cnt << "\n";
            //cout << x << '\n';
            no
        }
        t--;
    }
}