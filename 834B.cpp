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
    int n, k, i;
    string s;
    cin >> n >> k >> s;
    //cp = s;
    int len = s.size();
    vi a(26);
    //sort(cp, cp+len);
    for(i=0; i<len; i++)
    {
        a[int(s[i])-65] ++;
    }
    //d = no.of open doors
    int d = 0;
    int cnt[26];
    for(i=0; i<26; i++)
    {
        cnt[i]=0;
    }
    for(i=0; i<len; i++)
    {
        if(cnt[int(s[i])-65]==0)
            d++;
        if(d>k)
        {
            yes
            return 0;
        }
        cnt[int(s[i])-65]++;
        if(cnt[int(s[i])-65]==a[int(s[i])-65])
            d--;          
    }
    no
}