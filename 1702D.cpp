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
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        string s;
        cin >> s;
        int p;
        cin >> p;
        int i, n = s.size();
        ll sum = 0;
        for(i=0; i<n; i++)
        {
            sum+=int(s[i])-96;
        }
        if(sum<=p)
        {
            cout << s << "\n";
        }
        else
        {
            int cnt = 0;
            sort(s.begin(), s.end());
            for(i=0; i<n; i++)
            {
                if((int(s[i])-96)+cnt>p)
                    break;
                else
                {
                    cout << s[i];
                    cnt+=int(s[i])-96;
                }
            }
            cout << "\n";

        }
    }
}