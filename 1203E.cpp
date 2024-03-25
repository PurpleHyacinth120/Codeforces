#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n], i;
    for(i=0; i<n; i++)  
        cin >> a[i];
    sort(a, a+n);
    set<int>s;
    for(i=n-1; i>=0; i--)
    {
        if(s.find(a[i]+1)==s.end())
            s.insert(a[i]+1);
        else if(s.find(a[i])==s.end())
            s.insert(a[i]);
        else 
        {
            if(a[i]==1)
                break;
            if(s.find(a[i]-1)==s.end())
                s.insert(a[i]-1);
        }
    }
    cout << s.size() << "\n";
}