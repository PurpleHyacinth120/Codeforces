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
        string s;
        cin >> s;
        int i, cnt=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                cnt++;
                i+=k-1;
            }
        }
        cout << cnt << "\n";
        t--;
    }
}