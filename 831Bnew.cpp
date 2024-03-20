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
    string ore, ne, s;
    cin >> ore >> ne >> s;
    map<char, char> m;
    int i;
    char ORE[26], NE[26];
    for(i=0; i<26; i++)
    {
        int x, y;
        x = ore[i];
        y = ne[i];
        x-=32; y-=32;
        ORE[i] = char(x);
        NE[i] = char(y);
    }
    for(i=0; i<26; i++)
    {
        m[ore[i]]=ne[i];
        m[ORE[i]]=NE[i];
    }
    int n = s.size();
    for(i=0; i<n; i++)
    {
        if(m.count(s[i]))
            cout << m[s[i]];
        else
            cout << s[i];
    }

}