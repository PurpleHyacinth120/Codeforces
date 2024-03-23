#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int dup(ll x)
{
    ll p = x;
    int sum = 0;
    int rem;
    while(p>0)
    {
        rem = p%10;
        p=p/10;
        sum+=rem;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    ll a = 18;
    while(k>0)
    {
        a++;
        if(dup(a)==10)
            k--;
    }
    cout << a << "\n";

}