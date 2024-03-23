#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    if(n%2)
        cout << arr[n/2] << "\n";
    else
        cout << arr[n/2-1] << "\n";

}