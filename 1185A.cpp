#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int d; 
    cin >> d;
    sort(a, a+3);
    int min, max, mid;
    max = a[2];
    min = a[0];
    mid = a[1];
    int k =0;
    while(max-mid<d)
    {
        max++;
        k++;
    }
    while(mid-min<d)
    {
        min--;
        k++;
    }
    cout << k << "\n";
}