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
    int n, k;
    cin >> n >> k;
    int a[n];
    int i, j, p=0, m= 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==1)
            p++;
        else 
            m++;
    }
    set<int>s;
    int x, y;
    for(i=0; i<k; i++)
    {
        x=y=0;
        for(j=i; j<n; j+=k)
        {
            if(a[j]==1)
                x++;
            else
                y++;
        }
        s.insert(abs(p-x-m+y));
    }
    cout << *s.rbegin() << "\n";
}