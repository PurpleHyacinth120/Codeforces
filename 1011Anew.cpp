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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int i;
    char x;
    set<int> s;
    for(i=0; i<n; i++)
    {
        cin >> x;
        v[i]=int(x)-96;
        s.insert(v[i]);
    }
    auto it = s.begin();
    auto iter = s.begin();
    iter++;
    int l = s.size();
    int cnt = 1;
    int sum = *it;
    while(iter!=s.end())
    {
        if(cnt==k)
            break;
        if(*iter>(*it)+1)
        {
            it = iter;
            cnt++;
            sum+=*it;
        }
        iter++;
        
    }
    if (cnt==k)
        cout << sum << "\n";
    else
        cout << -1 <<  "\n";
}

