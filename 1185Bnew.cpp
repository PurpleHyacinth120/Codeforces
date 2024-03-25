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

// void solve()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     string s3, s4;
//     s3 = s4 = "";
//     int i, j, cnt;
//     //char x;
//     vi v1, v2;
//     for(i=1; i<s1.size(); i++)
//     {
//         cnt = 0;
//         s3+=s1[i];
//         for(j=i; j<s1.size() && s1[i]==s1[j]; j++)
//         {
//             cnt++;
//         }
//         i=j-1;
//         v1.pb(cnt);
//     }
//     for(i=1; i<s2.size(); i++)
//     {
//         cnt = 0;
//         s4+=s2[i];
//         for(j=i; j<s2.size() && s2[i]==s2[j]; j++)
//         {
//             cnt++;
//         }
//         i=j-1;
//         v2.pb(cnt);
//     }
//     bool check = true;
//     for(i=0; i<max(v1.size(), v2.size()); i++)
//     {
//         if(v1[i]!=v2[i])
//         {
//             check = false;
//             break;
//         }
//     }
//     if(check && (s3==s4))
//         yes
//     else
//         no
//     return;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n>0)
    {
        //void solve();
    string s1, s2;
    cin >> s1 >> s2;
    string s3, s4;
    s3 = s4 = "";
    int i, j, cnt;
    //char x;
    vi v1, v2;
    for(i=1; i<s1.size(); i++)
    {
        cnt = 0;
        s3+=s1[i];
        for(j=i; j<s1.size() && s1[i]==s1[j]; j++)
        {
            cnt++;
        }
        i=j-1;
        v1.pb(cnt);
    }
    for(i=1; i<s2.size(); i++)
    {
        cnt = 0;
        s4+=s2[i];
        for(j=i; j<s2.size() && s2[i]==s2[j]; j++)
        {
            cnt++;
        }
        i=j-1;
        v2.pb(cnt);
    }
    bool check = true;
    if(v1.size()!=v2.size())
        check = false;
    else
    for(i=0; i<v1.size(); i++)
    {
        if(v1[i]>v2[i])
        {
            check = false;
            break;
        }
    }
    if(check && (s3==s4))
        yes
    else
        no
        n--;
    }
}
