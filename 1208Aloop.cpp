#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t>0)
    {
        int a, b, n, i;
        cin >> a >> b >> n;
        int x=a, y=b, z ;
        if(n==0)
            cout << a << "\n";
        else if (n==1)
            cout << b << "\n";
        else
        {
            for(i=2; i<=n; i++)
            {
                z = x^y;
                x = y;
                y = z;
            }
            cout << z << "\n";
        }
        t--;
    }
}