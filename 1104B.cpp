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
    cin >> s;
    int cnt = 0;
    int i, l, r;
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
            l=i-1;
            r=i+2;
            while((l>-1 && r<s.size()) && s[l]==s[r])
            {
                cnt++;
                l--;
                r++;
            } 
            //cout << l+1 << " "  << r-1 << "^^\n";
            s.erase(s.begin()+l+1, s.begin()+r);
            if(s.size())
                i=l;
            else    
                break;
        }
    }
    //cout << cnt << "\n";
    if(cnt%2)
        cout << "Yes\n";
    else
        cout << "No\n";
}