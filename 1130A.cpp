#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int i;
    int pos=0, neg=0;
    int ceiling;
    if(n%2)
    {
        ceiling = n/2+1;
    }
    else
        ceiling = n/2;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
    }
    if(pos<ceiling && neg<ceiling)
    {
        cout << 0 << "\n";
    }
    else if(pos>=ceiling)
        cout << 1 << "\n";
    else if(neg>=ceiling)
        cout << -1 << "\n";
}