#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, t;
    cin >> n >> k >> t;
    if(t<=k)
        cout << t << "\n";
    else if(t>n)
        cout << n+k-t << "\n";
    else
        cout << k << "\n";
}