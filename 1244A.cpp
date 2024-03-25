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
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int x, y;
        pair<int, int> p1,p2;
        p1.first = a/c;
        p1.second = a%c;
        p2.first = b/d;
        p2.second = b%d;
        if(p1.second ==0)
            x = p1.first;
        else 
            x = p1.first +1;

        if(p2.second ==0)
            y = p2.first;
        else 
            y = p2.first +1;
        
        if(x+y>k)
            cout << -1 << "\n";
        else 
            cout << x << " " << y << "\n";
        t--;
    }
}