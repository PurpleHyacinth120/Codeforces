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
        vector<ll> a(n), b(n), c(n);
        int i;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        vector<ll> :: iterator iter;
        sort(a.begin(), a.end());
        auto it = a.rbegin();
        iter = find(b.begin(), b.end() , *it);
        c[iter-b.begin()] = 1;
        it++;
        for(i=2; i<=n; i++)
        {
            if(a[n-i]==a[n-i+1])
            {
                iter = find(iter+1, b.end() , a[n-i]);
                c[iter-b.begin()] = i;
            }
            else
            {
                iter = find(b.begin(), b.end() , *it);
                c[iter-b.begin()] = i;
            }
            it++;
        }
        for(i=0; i<n; i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
        t--;
    }
}