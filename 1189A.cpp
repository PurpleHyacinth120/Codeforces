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
    int xer, on;
    int i;
    for(i=0; i<n; i++)
    {
        
        if(s[i]=='0')
            xer++;
        else
            on++;
    }
    if(xer!=on)
    {
        cout << 1 << "\n" << s << "\n";
        return 0;
    }
    else
    {
        cout << 2 << "\n" << s.substr(0,n-1) << " " << s.substr(n-1);
    }
}