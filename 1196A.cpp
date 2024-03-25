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
    int q;
    cin >> q;
    while(q>0)
    {
        q--;
        ll a, b, c;
        cin >> a >> b >> c;
        ll x, y, z;
        if(a>b && a>c)
        {
            x = min(b, c);
            y = max(b, c);
            z = a;
        }
        else if(b>a && b>c)
        {
            x = min(a, c);
            y = max(a, c);
            z = b;
        }
        else
        {   
            x = min(a, b);
            y = max(a, b);
            z = c;
        }
        if(z>=y-x)
        {
            z-=y-x;
            x+=y-x+z/2;
        }
        else
            x+=z;
        cout << x << "\n";
    }
}