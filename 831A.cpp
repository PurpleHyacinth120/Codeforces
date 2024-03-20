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
    int i;
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n-1; i++)
    {
        if(!(a[i+1]-a[i]>0))
            break;
    }
    int j;
    for(j=i; j<n-1; j++)
    {
        if(a[j]!=a[j+1])
            break;
    }
    int k;
    for(k=j; k<n-1; k++)
    {
        if(a[k]-a[k+1]<=0)
            break;
    }
    if(k==n-1)
        yes
    else 
        no
}
