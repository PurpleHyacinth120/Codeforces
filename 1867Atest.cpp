#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t>0)
    {
        int n;
        cin >> n;
        ll a[n], b[n], c[n];
        int i;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        ::iterator iter;
        for(i=1; i<=n; i++)
        {
            if(a[n-i]==a[n-i+1])
            {
                iter = find(iter+1, b+n , a[n-i]);
                c[iter-b] = i;
            }
            else
            {
                auto iter = find(b, b+n , a[n-i]);
                c[iter-b] = i;
            }
        }
        for(i=0; i<n; i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
        t--;
    }
}