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
    string s;
    cin >> s;
    int n = s.size();
    int i, cnt=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            int j;
            for(j=i; j<n; j++)
            {
                if(s[j]=='0')
                    cnt++;
            }
            break;
        }
    }
    if(cnt>=6)
        yes
    else
        no
}
