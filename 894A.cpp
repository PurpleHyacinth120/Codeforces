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
    int i, j, k;
    int sum =0;
    int c1=0, c2=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            c1=c2=0;
            for(j=i-1; j>=0; j--)
            {
                if(s[j]=='Q')
                {
                    c1++;
                }
            }
            for(j=i+1; j<n; j++)
            {
                if(s[j]=='Q')
                {
                    c2++;
                }
            }
            sum+=c1*c2;
        }
    }
    cout << sum << "\n";
}