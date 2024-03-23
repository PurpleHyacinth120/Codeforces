#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>

bool cmp(pii a, pii b){
    if(a.ss==b.ss)
        return a.ff < b.ff;
    return a.ss < b.ss;
}
void solve()
{
    int n;
    cin >> n;
    int i, j;
    set<pii, decltype(cmp)*>s1(cmp);
    set<pii>s2;
    for(i=0; i<n; i++){
        for(j=i+1; j<=n; j++){
            s1.insert({i, j});
            s2.insert({i, j});
        }
    }
    int cnt = 0;
    while(!s1.empty()){
        cnt++;
        auto it = *s1.begin();
        s1.erase(it);
        s2.erase(it);
        int left = it.ff;
        int right = it.ss;
        auto itr = s2.lower_bound({it.ss, 0});
        while(itr!=s2.end()){
            left = itr->ff;
            right = itr->ss;
            s1.erase(*itr);
            s2.erase(itr);
            itr = s2.lower_bound({right, 0});
        }
    }
    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
        solve();
}