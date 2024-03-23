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
    int n, m, k;
    cin >> n >> m >> k;
    int i, j, o;
    int x[n], y[n];
    pii a[n];
    int b[k];

    for(i=0; i<n; i++)
        cin >> x[i];
    for(i=0; i<n; i++)
        cin >> y[i];
    for(i=0; i<k; i++)
        cin >> b[i];

    for(i=0; i<n; i++)
    {
        a[i].ff = y[i];
        a[i].ss = x[i];
    }

     //for(i=0; i<n; i++)
       // cout << "$$" << a[i].ss << "\n";
    
    sort(a, a+n);

    //for(i=0; i<n; i++)
      //  cout << "%" << a[i].ss  << "\t" << a[i].ff << "\n";
 
    vi v(m);
    j=0;
    for(i=1; i<=m; i++)
    {
        while((j<n) &&(a[j].ff == i) )
        {
            v[i-1] = a[j].ss;
            j++;
        }
    }
    sort(b, b+k);
    sort(v.begin(), v.end());

    //for(i=0; i<m; i++)
     //   cout << "*" << v[i] << "\n";

    int cnt = 0, p = 0;


    for(i=0; i<k; i++)
    {
        if(binary_search(v.begin(),v.end(),b[i]))
            cnt++;
        /*for(j=p; j<m; j++)
        {
            if(b[i]==v[j])
            {
                cnt++;
                p = j+1;
                break;
            }
        }*/
    }
    cout << k - cnt << "\n";
}
    