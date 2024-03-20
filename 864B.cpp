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
    int n;
    string s;
    cin >> n >> s;
    int i, j;
    size_t m = 0;
    for(i=0; i<n; i++)
    {
        set<char>si;
        for(j = i; j<n && islower(s[j]); j++)
        {
            si.insert(s[j]);
        }
        m = max(m, si.size());
        i=j;
    }
    cout << m << "\n";
}