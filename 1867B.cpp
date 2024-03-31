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
    int te;
    cin >> te;
    while(te>0)
    {
        int n;
        cin >> n;
        string s;
        int i;
        cin >> s;
        string t;
        t.assign(n+1, '0');
        //cout << t << "\n";
        int cnt=0;
        if(n%2)
        {
            //int x = ceil(n/2);
            for(i=0; i<n/2; i++)
            {
                if(s[i]!=s[n-i-1])
                    cnt++;
            }
            //cout << "cnt is " << cnt << "\n";
            for(i=cnt; i<=n-cnt; i++)
            {
                t[i]='1';
            }
            cout << t << "\n";
        }
        else
        {
            for(i=0; i<n/2; i++)
            {
                if(s[i]!=s[n-i-1])
                    cnt++;
            }
            //cout << "cnt is " << cnt << "\n";
            for(i=cnt; i<=n-cnt; i+=2  )
            {
                t[i]='1';

            }
            cout << t << "\n";
        }

        te--;
    }
}