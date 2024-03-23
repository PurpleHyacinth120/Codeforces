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
    int n, m;
    cin >> n >> m;
    int a[m];
    int i, su = 0;
    map<int, int> k;
    for(i=0; i<m; i++)
    {
        cin >> a[i];
        k[a[i]]++;
        su = max(k[a[i]], su);
    }
    int ma = m/n;
    if(ma == 0)
        cout << 0 << "\n";
    else
    {
        int cnt = ma;
        int sum = 0;
        while(cnt>0 && sum<n)
        {
            sum = 0;
            for(auto it = k.begin(); it!=k.end(); it++)
            {
                sum+=(it->ss)/cnt;
            }
            if(sum<n)
                cnt--;
        }
        cout << cnt << "\n";
    }
}