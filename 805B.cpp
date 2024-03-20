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
    int x = n/12;
    int y = n%12;
    string s = "", a = "baabbaabbaab";
    while(x>0)
    {
        s+= a;
        x--;
    }
    string p = a.substr(0,y);
    s+=p;
    cout << s << "\n";
}
//aababbaababb
//aab abb baa  bba  baa,bba,abb,aab,baa,bba,abb