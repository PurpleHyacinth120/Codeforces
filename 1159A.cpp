#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first(
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
    int i, j, da=0;
    int stones = 0;
    set<int>t;
    t.insert(0);
    for(i=0; i<n; i++)
    {
        if (s[i]=='+')
        {
            break;
        }
    }
    for(j=i; j<n; j++)
    {
        if(s[j]=='+')
        {
            stones++;
            da++;
        }
        else
        {
            stones--;
            da--;
        }
        t.insert(da);
    }
    cout << -(*t.begin()) +stones << "\n";
}