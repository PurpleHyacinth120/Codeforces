#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int d = a;
    int e = b/2;
    int f = c/4;
    cout << 7*min(d, min(e,f));
}
