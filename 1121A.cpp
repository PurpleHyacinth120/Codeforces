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
    int n, m, k;
    cin >> n >> m >> k;
    pii stu[n];
    int co[k];
    vi v(m);
    int i, j;
    for(i=0; i<n; i++)
        cin >> stu[i].ss;
    for(i=0; i<n; i++)
        cin >> stu[i].ff;
    for(i=0; i<k; i++)
        cin >> co[i];
    sort(stu, stu+n);
    int p = 0;
    for(i=1; i<=m; i++)
    {
        for(j=p; j<n; j++)
        {
            if(stu[j].ff == i)
            {
                v[i-1] = stu[j].ss;
            }
            else
                break;
        }
        p = j;
    }
    sort(v.begin(), v.end());
    sort(co, co+k);
    p = 0;
    int cnt = 0;
    /*for(i=0; i<m; i++)
    {
        cout << v[i] << " * ";
    }*/
   // cout << "\n";
    for(i=0; i<k; i++)
    {
        for(j=p; j<m; j++)
        {
            if(co[i]>=v[j])
            {
                cnt++;
                p=j+1;
                break;
            }
        }
    }
    //cout << "***" << cnt << "****\n";
    cout << k-cnt << "\n";


    
}