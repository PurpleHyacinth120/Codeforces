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
    ll n;
    cin >> n;
    int x, i;
    cin >> x;
    int a[3];
    for(i=0; i<3; i++)
        a[i]=i;
    if (n%6==0)
    {
        cout << x << "\n";
        return 0;
    }
    else
    {
        for(i=1; i<=n%6; i++)
        {
            if(i%2)
                swap(a[0], a[1]);
            else
                swap(a[1], a[2]);
        }
        cout << a[x] << "\n";
    }
}