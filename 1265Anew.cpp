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
    int t;
    cin >> t;
    while(t>0)
    {
        string s;
        cin >> s;
        int len = s.size();
        int i;
        /*if (s[0]=='?')
        {
            if(s[1]!='a')
                s[0]='a';
            else if(s[1]!='b')
                s[0]='b';
            else if(s[1]!='c')
                s[0]='c';
        }*/
        for(i=0; i<len; i++)
        {
            if(s[i]=='?')
            {
                if(s[i-1]!='a'&&s[i+1]!='a')
                    s[i]='a';
                else if(s[i-1]!='b'&&s[i+1]!='b')
                    s[i]='b';
                else if(s[i-1]!='c'&&s[i+1]!='c')
                    s[i]='c';
            }
        }
        /*if(s[len-1]=='?')
        {
            if(s[len-2]!='a')
                s[len-1]='a';
            else if(s[len-2]!='b')
                s[len-1]='b';
            else if(s[len-2]!='c')
                s[len-1]='c';
        }*/
        bool check = false;
        for(i=1; i<len; i++)
        {
            if(s[i-1]==s[i])
            {
                check = true;
                break;
            }
        }
        if(check)
            cout << -1 << "\n";
        else
            cout << s << "\n";
        t--;
    }
}