#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int main()
{
    ll t;
    cin >> t;
    while(t>0)
    {
        ll a, b, l, r;
        cin >> l >> r;
        ll i;
        bool cond = false;
        for(i=r; i>=l; i--)
        {
            for(a=2; a<=ceil((float)i/2); a++)
            {
                if(gcd(a,(i-a))!=1)
                {
                    cout << a << " " << i-a << "\n";
                    cond = true;
                    break;
                }
            }
            if(cond)
                break;
        }
        if(!cond)
            cout << -1 << "\n";
        t--;
    }
}