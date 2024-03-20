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
    int i, n;
    cin >> n;
    string s, rev;
    char p[n];
    cin >> s;
    rev = s;
    reverse(rev.begin(), rev.end());
    int last = n-1;
    int fir = 0;
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            p[last]= rev[i];
            last--;
        }
        else
        {
            p[fir]= rev[i];
            fir++;
        }
    }
    for(i=0; i<n; i++)
        cout << p[i];
}
