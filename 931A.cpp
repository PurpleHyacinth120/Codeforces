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
    int a, b;
    cin >> a >> b;
    int n = (a+b)/2;
    int x = abs(n-a);
    int y = abs(n-b);
    int tire = (x*(x+1))/2 + (y*(y+1))/2;
    cout << tire << "\n";
}