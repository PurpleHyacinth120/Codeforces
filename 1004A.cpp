#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, d;
    cin >> n >> d;
    int a[n], i;
    int sum =2;
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i] > 2*d)
            sum+=2;
        else if(a[i+1]-a[i] == 2*d)
            sum+=1;
    }
    cout << sum << "\n";
    
}