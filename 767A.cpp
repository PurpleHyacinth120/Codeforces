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
    int n;
    cin >> n;
    //cout << n << "\n";
    int a[n];
    int b[n];
    int i;
    set<int>s;
    int cnt = 0;
    for(i=0; i<n; i++)
    {
        cin >> b[i];
        //cout << a[i] << " ^^ ";
        //b[i]=a[i];
        s.insert(b[i]);
        while((*s.rbegin())==n-cnt)
        {
            cnt++;
            cout << *s.rbegin() << " ";
            s.erase(*s.rbegin());
        }
        cout << "\n";
    }    
   // cout << "\n";
    //sort(a, a+n);
    // for(i=0; i<n; i++)
    //     cout << a[i]<< " $$ ";
    // cout << "\n";
    // int cnt = 0;
    // set<int>s;
    // for(i=0; i<n; i++)
    // {
        
    // }
}
    