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
    int b, g, n;
    cin >> b >> g >> n;
    // 4 3 5
    //4 1 (5-4), 3 2, 2 3
    // i= b to n-g, j = n-b to g
    // 6 3 5
    //5 0, 4 1, 3 2, 2 3
    //6 7 5
    //5 0, 4 1,
    if(b<g)
        swap(b,g);
    if(b<n && g<n)
    {
        cout << b-n+g+1 << "\n";
    }
    else if(b>=n && g<=n)
    {
        cout << g+1 << "\n";
    }
    else
    {
        cout << n+1 << "\n";
    }
}