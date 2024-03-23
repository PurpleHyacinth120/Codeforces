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
    if(n==1)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << x1+x2 << " " << y1+y2 << "\n"; 
    }
    else
    {
        vector<pair<int, int>> v1(n);
        vector<pair<int, int>> v2(n);
        int i, x, y;
        for(i=0; i<n; i++)
        {
            cin >> x >> y;
            v1[i].ff = x;
            v1[i].ss = y;
        }
        int dx = v1[0].ff-v1[1].ff;
        int dy = v1[0].ss - v1[1].ss;
        //cout << dx << " " << dy << "||\n";
        for(i=0; i<n; i++)
        {
            cin >> x >> y;
            v2[i].ff = x;
            v2[i].ss = y;
        }
        int j;
        bool check = false;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if((((v2[i].ff-v2[j].ff)==dx) && ((v2[i].ss-v2[j].ss)==dy))||(((v2[j].ff-v2[i].ff)==dx) && (v2[j].ss-v2[i].ss==dy)))
                {
                    check = true;
                    break;
                }
            }
            if(check)
                break;
        }
    // cout << i << ' ' << j << "}}\n"; 
        if(v1[0].ff+v2[i].ff==v1[1].ff+v2[j].ff)
            cout << v1[0].ff+v2[i].ff << " " << v1[0].ss+v2[i].ss;
        else
            cout << v1[0].ff+v2[j].ff << " " << v1[0].ss+v2[j].ss;
    }
}
