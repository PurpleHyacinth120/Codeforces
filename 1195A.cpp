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
    int n, k;
    cin >> n >> k;
    int i, j, a[n], cnt;
    for(i=0; i<n; i++)
        cin >> a[i];
    int sum = 0;
    int total = (n+1)/2;
    for(i=1; i<=k; i++)
    {
        cnt=0;
        for(j=0; j<n; j++)
        {   
            if(a[j]==i)
                cnt++;
        }
        sum+=cnt/2;
    }
    cout << sum*2 + (total-sum) << "\n";
}
