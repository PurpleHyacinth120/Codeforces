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
    int n;
    ll x, y, a, b;
    x= 0; y=0;
    ll cnt=1;
    cin >> n;
    while(n>0)
    {
        n--;
        cin >> a >> b;
        if(x!=a||y!=b)
        {
            if(x==y && min(a,b)>x)
            {
                cnt+=min(a,b)-x;
            }
            else if(y>x && a>=y)
            {
                cnt+=min(a, b)-y+1;
                //cout << cnt << "::\n";
            }
            else if(x>y && b>=x)
            {
                cnt+=min(a,b)-x+1;
                //cout << cnt << "&&\n";
            }
        }
        x = a;
        y = b;
    }
    cout << cnt << "\n";
}