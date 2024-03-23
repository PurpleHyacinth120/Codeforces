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
    int n, m;
    cin >> n >> m;
    int i, j, k, l;
    string s[n];

    for(i=0; i<n; i++)
        cin >> s[i];

    int cnt = 0;
    int x;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='B')
            {
                x = i;
                k = j;
                while(s[x][k]=='B')
                {
                    cnt++;
                    k++;
                }
                cout << 1+i+cnt/2 << " " << 1+j+cnt/2 << "\n";
                return 0;
            }
        }
    }
    
}