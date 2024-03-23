#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll x, y;
    cin >> x >> y;
    if(y==x)
    {
        cout << '=' << "\n";
        return 0;
    }
    if(x<y)
    {
        long double a = (log(x)/log(y))*y;
        if(a>x)
            cout << '>' << "\n";
        else
            cout << '<' << "\n";
    }
    else
    {
        long double a = (log(y)/log(x))*x;
        if(a>y)
            cout << '<' << "\n";
        else
            cout << '>' << "\n";
    }

}  