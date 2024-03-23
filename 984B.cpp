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
    char a[n+2][m+2];
    int i, j, k, l, cnt= 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++){
            cin >> a[i][j];
            //cin.ignore();
        }
    }
    //int hel[3] = {0, 1, -1};
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i][j]!='*')
            {
                cnt = 0;
                // for(k=0; k<3; k++)
                // {
                //     for(l=0; l<3; l++)
                //     {
                //         if(a[i+hel[k]][j+hel[l]]=='*')
                //             cnt++;
                //     }
                // }
                if(a[i-1][j]=='*')
                    cnt++;
                if(a[i+1][j]=='*')
                    cnt++;
                if(a[i-1][j-1]=='*')
                    cnt++;
                if(a[i-1][j+1]=='*')
                    cnt++;
                if(a[i][j-1]=='*')
                    cnt++;
                if(a[i][j+1]=='*')
                    cnt++;
                if(a[i+1][j-1]=='*')
                    cnt++;
                if(a[i+1][j+1]=='*')
                    cnt++;

                if(cnt==0)
                {   
                    if(a[i][j]!='.')
                    {
                        no
                        return 0;
                    }
                }
                else if((a[i][j]-48)!=cnt)
                {
                    //cout << i << "**" << j << "\n";
                    no
                    return 0;
                }
            }
        }
    }
    yes
}

