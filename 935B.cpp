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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i, x, y, cnt;
    cnt=x=y=0;
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='U')
            y++;
        else
            x++;
        if(x==y && s[i]==s[i+1])
            cnt++;
    }
    cout << cnt << "\n";
}