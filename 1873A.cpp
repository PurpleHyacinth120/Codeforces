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
    string s1;
    cin >> s1;
    if(s1=="abc")
    {
        yes
    }
    else if((s1=="cab"))
    {
        no
    }
    else if(s1=="acb")
    {
        yes
    }
    else if(s1 == "bac")
    {
        yes
    }
    else if(s1=="bca")
    {
        no
    }
    else 
    {
        yes
    }
    t--;
    }

}