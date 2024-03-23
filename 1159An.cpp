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
    int cnt = 0;
    int mini = 0;
    for(auto x: s)
    {
        if(x=='+')
            cnt++;
        else
            cnt--;
        mini = min(cnt, mini);
    }
    cout << cnt-mini << "\n";
}