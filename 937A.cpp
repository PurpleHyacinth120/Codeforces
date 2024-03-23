#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.count(0))
        cout << s.size() - 1 ;
    else
        cout << s.size();   
}