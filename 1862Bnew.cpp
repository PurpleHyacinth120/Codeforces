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
        int n, i;
        cin >> n;
        int b[n];
        for(i=0; i<n; i++)
            cin >> b[i];
        vector<int>a;
        a.push_back(b[0]);
        for(i=1; i<n; i++)
        {
            if(b[i]>=(*a.rbegin()))
                a.push_back(b[i]);
            else 
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout << a.size() << "\n";
        for(i=0; i< a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        t--;
    }
}