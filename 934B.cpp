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
    int k;
    cin >> k;
    if(k>36)
        cout << -1 << "\n";
    else
    {
        int x = k/2;
        int y = k%2;
        int i;
        for(i=0; i<x; i++)
            cout << 8 ;
        for(i=0; i<y; i++)
            cout << 4;
    }
}