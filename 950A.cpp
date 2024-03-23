#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l, r, a;
    cin >> l >> r >> a;
    if(l<=r)
    {
        if(a>r-l)
        {
            cout << 2*(r+(a-r+l)/2) << "\n";
        }
        else
        {
            cout << 2*(a+l) << "\n";
        }
    }
    else
    {
        if(a>l-r)
        {
            cout << 2*(l+(a-l+r)/2) << "\n";
        }
        else
        {
            cout << 2*(a+r) << "\n";
        }
    }

}