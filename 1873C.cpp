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
        string s[10];
        int i, j, x, p, sum =0;
        for(i=0; i<10; i++)
            cin >> s[i];

            x=0;
            p = 10;
        for(i=0; i<5; i++)
        {
            int cnt = 0;
            for(j=x; j<p; j++)
            {
                if(s[i][j]=='X')
                    cnt++;
            }
            sum += (i+1)*cnt;
            x++;
            p--;
        }
        x = 0; p = 10;
        for(i=9; i>4; i--)
        {
            int cnt = 0;
            for(j=x; j<p; j++)
            {
                if(s[i][j]=='X')
                    cnt++;
            }
                sum+= (10-i)*cnt;
            
            x++;
            p--;
        }
        x = 1; p = 9;
        for(j=0; j<5; j++)
        {
            int cnt = 0;
            for(i=x; i<p; i++)
            {
                if(s[i][j]=='X')
                    cnt++;
            }
            sum+= (j+1)*cnt;
            x++;
            p--;
        }
        x=1; p = 9;
        for(j=9; j>4; j--)
        {
            int cnt = 0;
            for(i=x; i<p; i++)
            {
                if(s[i][j]=='X')
                    cnt++;
            }
                sum+= (10-j)*cnt;
            
            x++;
            p--;
        }
        cout << sum << "\n";
        t--;
    }

}