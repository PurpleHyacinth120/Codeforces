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
    for(i=0; i<n; i++)
    {
        if(arr[arr[arr[i]-1]-1]==i+1)
        {
            cout << "YES\n";
            break;
        }
    }
    if(i==n)
        cout << "NO\n";

}