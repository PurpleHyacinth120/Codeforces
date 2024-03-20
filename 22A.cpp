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
    int n;
    cin >> n;
    int i;
    set<int>s;
    int x;
    for(i=0; i<n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    if(s.size()>1)
        cout << *(++s.begin()) << "\n";
    else
        no    
}
