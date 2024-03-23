#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    pair <int, int> arr[n];
    int i;
    for(i=0; i< n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    int k;
    cin >> k;
    for(i=0; i<n; i++)
    {
        if (k==arr[i].first)
        {
            cout << n-i << "\n";
            break;
        }
         else if(k> arr[i].first && k <= arr[i].second)
        {
            cout << n-i << "\n";
            break;
        }
    }

}