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
    string s;
    cin >> s;
    int h1, h2, m1, m2;
    h1 = s[0]-48;
    h2 = s[1]-48;
    m1 = s[3]-48;
    m2 = s[4]-48;
   // cout << h1 << " " << h2 << " " << m1 << " " << m2 << "\n";
    if(h1==0||h1==1)
    {
        if(h2<=4)
        {
            if((m1*10+m2)<=(h2*10+h1))
            {
                cout << h2*10 + h1 - (m1*10+m2) << "\n";
            }
            else
            {
                cout << 70 - (m1*10+m2) + h2*10 + h1 << "\n";
            }
        }
        else if(h2==5 && ((m1*10+m2)<=(h2*10 + h1)))
        {
            cout << h2*10 + h1 - (m1*10+m2) << "\n";
        }
        else
            cout << 251 - ((h2-5)*60 + (m1*10+m2) - 50 - h1);
    }
    // if(h1==1)
    // {
    //     if(h2<=4)
    //     {
    //         if((m1*10+m2)<=h2*10)
    //         {
    //             cout << h2*10 - (m1*10+m2) << "\n";
    //         }
    //         else
    //         {
    //             cout << 70 - (m1*10+m2) + h2*10 << "\n";
    //         }
    //     }
    //     else if(h2==5 && ((m1*10+m2)<=h2*10))
    //     {
    //         cout << h2*10 - (m1*10+m2) << "\n";
    //     }
    //     else
    //         cout << 251 - ((h2-5)*60 + (m1*10+m2) - 50);
    // }
    else
    {
        if(h2<=2)
        {
            if((m1*10+m2)<=(h2*10+h1))
            {
                cout << h2*10 + h1 - (m1*10+m2) << "\n";
            }
            else
            {
                cout << 70 - (m1*10+m2) + h2*10 + h1 << "\n";
            }
        }
        else if(h2==3 && ((m1*10+m2)<=(h2*10 + h1)))
        {
            cout << h2*10 + h1 - (m1*10+m2) << "\n";
        }
        else
            cout << 60 - (m1*10+m2);
    }
    
}