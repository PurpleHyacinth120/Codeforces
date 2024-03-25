#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vl vector<ll>

void solve()
{
    int n;
    cin >> n;
    int i;
    string x;
    set<string>s;
    string a[n];
    map<string, int>m;
    for(i=0; i<n; i++)
    {
        cin >> x;
        a[i] = x;
        m[a[i]]++;
        s.insert(a[i]);
    }
    cout << n-s.size() << "\n";
    for(i=0; i<n; i++)
    {
        if(m[a[i]]==1)
        {
            cout << a[i] << "\n";
        }
        else
        {
            string y = a[i].substr(0,3);
            for(int j = 0; j<=9; j++)
            {
                if(!m[y+to_string(j)])
                {
                    m[a[i]]--;
                    m[y+to_string(j)]=1;
                    a[i] = y+to_string(j);
                    break;
                }
            }
            cout << a[i] << "\n";
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