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
        int a, b, sum =0;
        cin >> a >> b;
        int x = abs(a-b);
        sum+=x/5;
        int y = x%5;
        sum+=(y/2 + y%2);
        cout << sum << "\n";
        t--;
    }
}