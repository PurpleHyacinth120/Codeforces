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
    ll n;
    int k;
    cin >> n >> k;
    int cnt, p;
    cnt = p = 0;
    while(cnt<k && n!=0)
    {
        if(n%10==0)
            cnt++;
        else
            p++;
        n/=10;
    }
    if(cnt<k)
        if(cnt!=0)
            cout << cnt+p-1 << "\n";
        else
            cout << 0 << "\n";
    else
        cout << p << "\n";
}