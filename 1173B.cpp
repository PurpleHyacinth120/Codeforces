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
    int n, m;
    cin >> n;
    if(n%2)
        m = (n+1)/2;
    else
        m = (n+2)/2;
    cout << m << "\n";
    int i = 1, j = 1;
    int cnt = 0;
    for(j = 1; j<=m; j++)
    {
        cout << i << " " << j << "\n";
        cnt++;
        if(cnt ==n)
            break;
    }
    if(cnt!=n)
        for(j = m, i++; i<=m; i++)
        {
            cout << i << " " << j << "\n";
            cnt++;
            if(cnt ==n)
                break;
        }
}


        