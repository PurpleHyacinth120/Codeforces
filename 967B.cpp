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
    int n, a, b;
    cin >> n >> a >> b;
    int i, s[n], cnt=0;
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> s[i];
        sum+=s[i];
    }
    sum-=s[0];
    float k = (float)b/s[0];
    ll rem = a - b;
    sort(s+1, s+n);
    //cout << sum << "***\n" << rem << ")))\n" << k << "^^\n";
    while((sum*k)>rem)
    {
        cnt++;
        sum-=s[n-cnt];
    }
    cout << cnt << "\n";
}
