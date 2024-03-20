#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<string, int> m;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(m[s]==0)
            cout << "OK\n";
        else
            cout << s << m[s] << "\n";
        m[s]++;        
    }
}