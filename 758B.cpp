#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int b, r, y, g;
    b = y = r = g = 0;
    int i;
    int n = s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]==66)
            b = i%4;
        else if(s[i]==82)
            r = i%4;
        else if(s[i]==71)
            g = i%4;
        else if(s[i]==89)
            y = i%4;
    }
    map<int, int>m;
    for(i=0; i<n; i++)
    {
        if(s[i]=='!')
        {
            int x = i%4;
            if(x == r)
                m[r]++;
            else if(x==b)
                m[b]++;
            else if(x==y)
                m[y]++;
            else
                m[g]++;
        }
    }
    cout << m[r] << " " << m[b] << " " << m[y] << " " << m[g] << "\n";
}
// r b y g