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
    unsigned ll a, b;
    //cout << ULLONG_MAX << "\n";
    cin >> a >> b;
    if(a==b)
    {
        cout << 1 << "\n";
    }
    else if(b>a+4)
        cout << 0 << "\n";
    else
    {
        unsigned ll ans = (a+1)%10, x = b-a;
        for(int i = 2; i<=x; i++)
        {
            ans*= (a+i)%10;
        }
        cout << ans%10 << "\n";
    }

}
// 6 8 ; 7 8
//18 22 // 19 20 21 22 
