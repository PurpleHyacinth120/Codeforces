#include<iostream>

using namespace std;

int main()
{
    int n, max1;
    cin >> n;
    int arr1[n];
    cin >> arr1[0];
    max1 = arr1[0];
    int i;
    for(i=1; i<n; i++)
    {
        cin >> arr1[i];
        if (arr1[i]> max1)
            max1 = arr1[i];
    }
    int m, max2;
    cin >> m;
    int arr2[m];
    cin >> arr2[0];
    max2 = arr2[0];
    for(i=1; i<m; i++)
    {
        cin >> arr2[i];
        if (arr2[i]> max2)
            max2 = arr2[i];
    }
    cout << max1 << " " << max2;
    return 0;
}