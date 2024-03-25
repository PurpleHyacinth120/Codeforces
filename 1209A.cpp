#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n], i, j;
    set<int> s;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        for(j=2; j<=a[i]/2; j++)
        {
            if(a[i]%j==0)
                break;
        }
        if(j==1+a[i]/2 )
        {
            s.insert(a[i]);
        }   
    }
    int count = 0;
    count += s.size();
    sort(a, a+n);
    if(a[0]==1)
        count =1;
    else
    for(i=0; i<n; i++)
    {
        if(!s.count(a[i]))
        {
            auto it = s.begin();
            for( it = s.begin(); it!=s.end(); it++)
            {
                if(a[i]%(*it)==0)
                    break;
            }
            if(it==s.end())
            {    
                count++;
                s.insert(a[i]);
            }

        }
    }
cout << count << "\n";
    
}