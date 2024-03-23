#include<bits/stdc++.h>
#include<algorithm>
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
    if(n==1||n==2)
    {
        cout << "No\n";
        return 0;
    }
    ll sum = (n*(n+1))/2;
    ll i, j;
//  if(n%2)
//     {
//         cout << "Yes\n";
//         cout << 1 << " " << 2 << "\n" << n-1 << " " << 1 << " ";
//         for(i=3; i<=n; i++)
//             cout << i << " " ;
//         return 0;
//     }
    for(i=2; i<=n; i++)
    {
        if(__gcd(sum-i, i)>1)
        {
            cout << "Yes\n";
            cout << 1 << " " << i << "\n" << n-1 << " ";
            for(j=1; j<i; j++)
                cout << j << " ";
            for(j=i+1; j<=n; j++)
                cout << j << " ";
            return 0; 
        }
    }

}
// 1+3+2 