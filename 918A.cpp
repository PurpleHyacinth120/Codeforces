#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    int i;
    int a1=1;
    int lim, a2=1;
    vector<int>num;
    num.pb(a1);
    num.pb(a2);
    for(lim=1; *num.rbegin()<1001 ;lim++)
    {
        num.pb(a1+a2);
        a1=a2;
        a2=*num.rbegin();
    }
    for(i=1; i<=n; i++)
    {
        if(find(num.begin(),num.end(),i)!=num.end())
            cout << 'O';
        else 
            cout << 'o';
    }
}