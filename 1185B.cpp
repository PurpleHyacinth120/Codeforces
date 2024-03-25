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
    int n;
    cin >> n;
    while(n>0)
    {
        n--;
        string s1, s2;
        cin >> s1 >> s2;
        int i, j;
        string s3, s4;
        s3 = s1[0];
        s4 = s2[0];
        vi v1, v2;
        v1.pb(0);
        v2.pb(0);
        for(i=1; i<s1.size(); i++)
        {
            if(s1[i]!=s1[i-1])
            {
                s3+=s1[i];
                v1.pb(i-*v1.rbegin());
            }
        }
        v1.pb(s1.size()-1-*v1.rbegin());
        for(i=1; i<s2.size(); i++)
        {
            if(s2[i]!=s2[i-1])
            {
                s4+=s2[i];
                v2.pb(i-*v2.rbegin());
            }
        }
        v2.pb(s2.size()-1-*v2.rbegin());
        if(s3==s4)
        {
            for(i=0; i<v1.size(); i++)
            {
                if(v2[i]<v1[i])
                {
                    no
                    break;
                }
            }
            if(i==v1.size())
                yes
        } 
        else
            no
    }
}