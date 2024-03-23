#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, v;
    cin >> n >> v;
    int dollars;
    if(n-1<v)
        dollars = n-1;
    else
        dollars = v;
    for(int i=2; i<n; i++)
    {
        if(v-1<n-i)
            dollars += i;
    }
    cout << dollars << "\n";
}