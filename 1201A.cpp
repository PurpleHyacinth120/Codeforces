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
    int a[n][m];
    int i, j;
    char x;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> x;
            a[i][j] = int(x)- 64;
        }
    }
    int b[m];
    for(i=0; i<m; i++)
        cin >> b[i];
    int sum, A, B, C, D, E;
    sum = A = B = C = D = E = 0;
    for(i=0; i<m; i++)
    {
        A = B = C = D = E = 0;
        for(j=0; j<n; j++)
        {
            if(a[j][i]==1)
                A++;
            else if(a[j][i]==2)
                B++;
            else if(a[j][i]==3)
                C++;
            else if(a[j][i]==4)
                D++;
            else if(a[j][i]==5)
                E++;
        }
        sum += b[i]*max(A, max(B, max(C, max(D,E))));
    }
    cout << sum << "\n";
}