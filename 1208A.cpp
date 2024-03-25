#include<bits/stdc++.h>
using namespace std;
int xoro(int x, int y, int z)
{
    if(z==0)
        return x;
    else if(z==1)
        return y;
    else
        return (xoro(x, y, z-1) ^ xoro(x, y, z-2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t>0)
    {
        int a, b, n, fo;
        cin >> a >> b >> n;
        fo = xoro(a, b, n);
        cout << fo << "\n";
        t--;
    }

}