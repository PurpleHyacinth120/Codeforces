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
    if(n%3==0)
        cout << 1 << " " << 1 << " " << n-2 << '\n';
    else if(n%3==1)
        cout << 1 << " " << 2 << " " << n-3 << '\n';
    else if(n%3==2)
        cout << 2 << " " << 2 << " " << n-4 << '\n';
}