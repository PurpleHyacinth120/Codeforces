#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t>0)
    {
        int k;
        string s;
        cin >> k >> s;
        int i;
        set<int>p;
        for(i=0; i<k; i++)
        {   int cnt=0 , j;
            if(s[i]=='A')
            {
                for(j=i+1; s[j]=='P'; j++)
                    cnt++;

                p.insert(cnt);  
            }
        }
        size_t found =s.find('A');
        if(found!=string::npos)
            cout << *p.rbegin() << "\n";
        else
            cout << 0 << "\n";
        t--;
    }
}