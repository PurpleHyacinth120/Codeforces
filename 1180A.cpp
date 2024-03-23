#include<bits/stdc++.h>
using namespace std;

int no_of_cells(int x)
{
    if(x==1)
        return 1;
    else
        return no_of_cells(x-1)+4*(x-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << no_of_cells(n);
    }