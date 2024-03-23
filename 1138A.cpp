#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, i;
    cin >> n;
    int a[n];
    int len=0;
    int left=0, right =0;
    set<int>s;
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n-1; i++)
    {
        if(a[i]==1 && a[i+1]==2)
        {
            int j=i;
            left=right=0;
            while(a[j]==1)
            {
                left++;
                j--;
            }
            int k = i+1;
            while(a[k]==2)
            {
                right++;
                k++;
            }
            s.insert(2*min(left, right));
        }
        if(a[i]==2 && a[i+1]==1)
        {
            int j=i;
            left=right=0;
            while(a[j]==2)
            {
                left++;
                j--;
            }
            int k = i+1;
            while(a[k]==1)
            {
                right++;
                k++;
            }
            s.insert(2*min(left, right));
        }
    }
    cout << *s.rbegin() << "\n";

}