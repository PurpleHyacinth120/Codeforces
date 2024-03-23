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
    int n;
    cin >> n;
    int a[n];
    int tot = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        tot +=a[i];
    }
    int req = ceil(4.5*n - tot);
    sort(a, a+n);
    int i, sum = 0;
    int cnt = 0;
    for(i=0; sum<req; i++)
    {
        sum+= (5-a[i]);
        cnt++;
    }
    cout << cnt << "\n";
}