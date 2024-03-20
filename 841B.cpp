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
    cin >> n;
    ll x;
    int i;
    bool check = false;
    for(i=0; i<n; i++)
    {
        cin >> x;
        if(x%2)
        {
            check = true;
            break;
        }
    }
    if(check)
        cout << "First\n";
    else
        cout << "Second\n";
}
    