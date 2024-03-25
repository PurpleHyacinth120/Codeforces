#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int i, j, n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    set<char>s1, s2;
    for(i=0; i<n; i++)
    {
        if(s[i]==t[i])
            continue;
        string a, b;
        for(j=i; j<n; j++)
        {
            if(s1.size()<2 && s2.size()<2)
            {
                s1.insert(s[j]);
                s2.insert(t[j]);
            }
                
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--)
        solve();
}
// abbc-> bacb
// abc->acb
// bcab->bcba
// aab->aba->baa
// b to front of a, c to front of b anywhere
// bcaabababc
// cbbababaac