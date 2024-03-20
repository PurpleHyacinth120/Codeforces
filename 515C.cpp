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
    string s;
    cin >> s;
    int i;
    string ns;
    for(i=0; i<n; i++)
    {
        if(s[i]!='1' && s[i]!='0')
        {
            if(s[i]=='4')
                ns+="322";
            else if(s[i]=='6')
                ns+="53";
            else if(s[i]=='8')
                ns+="7222";
            else if(s[i]=='9')
                ns+="7233";
            else
                ns+=s[i];
        }
    }
    sort(ns.begin(), ns.end());
    reverse(ns.begin(), ns.end());
    cout << ns << "\n";
}