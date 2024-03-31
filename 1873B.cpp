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
        int a[n];
        int i;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        a[0]+=1;
        ll prod = 1;
        for(i=0; i<n; i++)
        {
            prod = prod*a[i];
        }
        cout << prod << "\n";

        t--;
    }

}