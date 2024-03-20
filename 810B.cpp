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
    int n, f;
    cin >> n >> f;
    int a[n], b[n]; // a->dif, b->final
    int i, pr, cu;
    ll sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> pr >> cu;
        if(pr>=cu)
        {
            a[i]=0;
        }
        else
        {
            a[i]=min(2*pr, cu) - pr;
        }
        sum+=min(pr, cu);
    }
    sort(a, a+n);
    i = n-1;
    while(f>0)
    {
        f--;
        sum+=a[i];
        i--;
    }
    cout << sum << "\n";
}