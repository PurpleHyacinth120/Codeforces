#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n, k; 
    cin  >> n >>  k >> s;
    if(n==1 && k>0)
        cout << 0 << "\n";
    else if(n==1)
        cout << s << "\n";
    else
    {
        char x = s[0];
        int i, j= 0;
        for(i=1; i<n && k>0; i++)
        {
            if(s[i]!=48)
            {
                j = i;
                x = s[i];
                s[i]=48;
                k--;
                
            }
        }
        if(i==n && k>0)
        {
            s[0]=49;
            cout << s << "\n";
        }
        else 
        {
            if(s[0]!=49)
            {
                s[0]=49;
                s[j]=x;
            }
            cout << s << "\n";
        }
    }

}
