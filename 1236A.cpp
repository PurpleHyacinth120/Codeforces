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
        int a, b, c;
        cin >> a >> b >> c;
        int x;
        int sum =0;
        if(b>c/2)
        {
            sum += c/2;
            x = b-c/2;
            if(a>x/2)
                sum += x/2;
            else
                sum += a;
        }
        else
        {
            sum += b;
        }
        cout << 3*sum << "\n";
        t--;
    }
}