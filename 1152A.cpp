#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int i, j;
    int a[n], b[m];
    int a_even=0, b_even=0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
            a_even++;
    }
    for(i=0; i<m; i++)
    {
            cin >> b[i];
            if(b[i]%2==0)
                b_even++;
    }
    int a_odd = n- a_even;
    int b_odd = m- b_even;
    cout << min(a_odd, b_even) + min(a_even, b_odd) << "\n";
}