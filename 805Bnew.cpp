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
    int n, i;
    cin >> n;
    char s[n];
    s[0]='a';
    s[1] = 'b';
    for(i=0; i<n-2; i++)
    {
        if(s[i]=='a')
            s[i+2]='b';
        else //if(s[i]='b')
            s[i+2]='a';
    }
    for(i=0; i<n; i++)
        cout << s[i];

}