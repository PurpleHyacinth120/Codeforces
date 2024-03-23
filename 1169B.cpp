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
    
    int n, m;
    cin >> n >> m;
    int i, x, y, z, a;
    pii p;
    cin >> z >> a;
    set<int> s;
    for(i=1; i<m; i++)
    {
        cin >> x >> y;
        if(x==z||x==a)
        {
            s.insert(x);
        }
        else if(y==z||y==a)
        {
            s.insert(y);
        }
        z = x;
        a = y;
    }
    if(s.size()==2||s.size()==1)
    {
        yes
    }
    else
        no
}
