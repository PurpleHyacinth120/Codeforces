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
    int n;
    cin >> n;
    int a[n];
    int i, j, maxim=0, minim = 101, smin= INT_MAX, x, sum=0;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        maxim = max(a[i], maxim);
        minim = min(a[i], minim);
    }
    for(i=minim; i<=maxim; i++)
    {
        sum = 0;
        for(j=0; j<n; j++)
        {
            if(i!=a[j])
                sum+= abs(i-a[j])-1;
        }
        smin = min(sum, smin);
        if(smin==sum)
            x=i;
    }
    cout << x << " " << smin << "\n";
}