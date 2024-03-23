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
    int hh, mm;
    cin >> hh >> mm;
    int mins=0;
    int H, D, C, N;
    cin >> H >> D >> C >> N;
    //cout << hh << "\n" << mm << "\n";
    if(hh<20)
    {
        if(mm==0)
            mins = (20-hh)*60;
        else
        {
            mins = 60-mm + 60*(19-hh) ;
           // cout << mins <<"****\n";
        } 
        ll hunger;
        hunger = H + D*mins;
        ll l = (hunger+N-1)/N;
        ll f = (H+N-1)/N;
        float last = 0.8*C *l;
        float first = C*f;
        cout << fixed << setprecision(4) << min(first, last);
    }
    else
    {
        mins = 24*60 - (hh-20)*60 - mm;
        ll f = (H+N-1)/N;
        float last = 0.8*C *f;
        cout << last << "\n";
    }
}