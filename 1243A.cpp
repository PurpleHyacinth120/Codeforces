#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    while(k>0)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> s;
        int i;
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        auto it = s.rbegin();
        set<int>s1;
        for(it=s.rbegin(); it !=s.rend() ; it++)
        {
            int cnt=0 ;
            for(i=0;i<n;i++)
            {
                if(arr[i]>=*it)
                    cnt++;
            }
            s1.insert((cnt>*it?*it:cnt));            
        }
        cout << *s1.rbegin() << "\n";
        k--;
    }
}
