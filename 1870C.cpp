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
    int t;
    cin >> t;
    while(t>0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int a[n];
        for(i=0; i<n; i++)
            cin >> a[i];
        int b[n][n];
        int j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                b[i][j] = min(a[i], a[j]);
               // cout << b[i][j] << "\t";
            }
            //cout << "\n";
        }
        
        int h;
        int r1, r2, c1, c2;
        for(h=1; h<=k; h++)
        {
            // if(binary_search(a, a+n, h))
            // {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(b[i][j]==h)
                        {
                            r1 = i;
                            break;
                        }
                    }
                    if(b[i][j]==h)
                        break;
                }
                for(i=n-1; i>-1; i--)
                {
                    for(j=0; j<n; j++)
                    {
                        if(b[i][j]==h)
                        {
                            r2 = i;
                            break;
                        }
                    }
                    if(b[i][j]==h)
                        break;
                }
                for(j=0; j<n; j++)
                {
                    for(i=0; i<n; i++)
                    if(b[i][j]==h)
                    {
                        c1 = j;
                        break;
                    }
                    if(b[i][j]==h)
                        break;
                }
                for(j=n-1; j>-1; j--)
                {
                    for(i=0; i<n; i++)
                    {
                        if(b[i][j]==h)
                        {
                            c2 = j;
                            break;
                        }
                    }
                    if(b[i][j]==h)
                        break;
                }
                if(find(a, a+n, h)!= a+n)
                {
                    //cout << r2 << " " << r1 << " " << c2 << " " << c1 << "***\n ";
                    cout << r2-r1 + c2-c1 +2 << " ";
                }
                else
                cout << 0 << " ";  
        }
        cout << "\n";
        t--;
    }
}