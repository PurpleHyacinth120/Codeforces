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
        int n, k, x;
        cin >> n >> k >> x;
        // if(k > x+1)
        // {
        //     cout << -1 << "\n";
        // }
        if(k==x && x==0)
        {
            cout << -1 << "\n";
        }
        else if(k==x+1 && n>=x+1)
        {
            int y = (x*(x+1))/2 + (n-x-1)*x;
            cout << y << "\n";
        }
        else if(x==k && n>=k)
        {
            int p = ((k-1)*k)/2 + (n-k)*(k-1);
            cout << p << "\n";
        }
        else if(k==0)
        {
            cout << x*n << "\n";
        }
        // else if (k==0 && n>x)
        // {
        //     cout << (x*(x+1))/2 +(n-x)*x << "\n";
        // }
        // else if(k < x && n>=x)
        // {
        //     int y = (x*(x+1))/2 - k + (n-x)*x;
        //     cout << y << "\n";
        // }
        else if(k < x && n>=k)
        {
            cout << (k*(k-1))/2 + (n-k)*x << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }

        t--;
    }
}