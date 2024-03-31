#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ceil((float)abs(a-b)/(2*c)) << "\n";
    t--;
    }
}
