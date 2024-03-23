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
    int n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    while(k>0)
    {
        int ta, tb, fa, fb;
        int sum = 0;
        cin >> ta >> fa >> tb >> fb;
        sum += abs(ta-tb);
        int x = abs(fa-a);
        int y = abs(fa-b);
        if(sum!=0)
        {
            if(!(a<=fa && b>=fa))
            {
                int l = min(x,y);
                sum += l;
                if(l == x)
                    sum += abs(fb-a);
                else
                    sum += abs(fb-b);
            }
            else
                sum += abs(fb-fa);
        }
        else
            sum += abs(fa-fb);
        
        cout << sum << "\n";      
        k--;
    }
}