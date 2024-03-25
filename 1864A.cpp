#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t>0)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int result = y- (n*(n-1))/2;
        //cout << result;
        if(x>result)
            cout << -1 << "\n";
        else
        {
            cout << x << " ";
            for(int i = 1; i<=n-2; i++)
            {
                result += n-i;
                cout << result << " ";
            }
            cout << y << "\n";
            
        }
        t--;
    }
}