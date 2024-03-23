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
    int r, c;
    cin >> r >> c;
    char a[r+2][c+2];
    int i, j;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
            cin >> a[i][j];
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a[i][j]=='S')
            {
                if(a[i+1][j]=='W'|| a[i-1][j]=='W'||a[i][j+1]=='W'||a[i][j-1]=='W')
                {
                    no
                    return 0;
                }
            }
        }
    }
    yes
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a[i][j]=='.')
            {
               a[i][j]='D';
            }
            cout << a[i][j] ;
        }
        cout << "\n";
    }
}