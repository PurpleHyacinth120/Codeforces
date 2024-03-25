#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        ll sz = s.size();
        ll i,z;
        ll da = 0;
        for(i=0; i<sz; i++)
        {
            if(da<2 && s[i]=='0')
            {
                cout << "No\n";
                break;
            }
            if(s[i]=='+')
                da++;
            else if(s[i]=='-')
                da--;
        }
        if(i==sz)
        {
        for(z=0; z<sz; z++)
        if(s[z]=='1')
        {
            ll j = z+1;
            for(j=z+1; s[j]=='-';j++)
            {}
            if(s[j]=='+')
            {
                ll k, plus, minus;
                plus = minus = 0;
                for(k=j; s[k]=='+'||s[k]=='-'; k++)
                {
                    if(s[k]=='+')
                        plus++;
                    else
                        minus++;
                }
                if((minus-plus>=0) && (s[k]=='0'))
                {
                    cout << "No\n";
                    break;
                }
            }
        }
        }
        if(z==sz && i==z)
        {
            cout << "Yes\n";
        }        
        t--;
    }
}