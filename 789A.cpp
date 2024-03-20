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
    int a[n];
    int i, sum =0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=(a[i]+k-1)/k;
    }
    cout << (sum+1)/2 << "\n";
}