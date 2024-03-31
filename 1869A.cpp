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
    int t;
    cin >> t;
    while(t>0)
    {
        int n;
        cin >> n;
        int a[n];
        int i = 0;
        while(i<n)
        {
            cin >> a[i];
            i++;
        }
        if(n%2)
        {
            if(a[n-1]==0)
            {
                int x = a[0];
                for(i=1; i<n-1; i++)
                {
                    x = x^a[i];
                }
                if(x==0)
                {
                    cout << 1 << "\n";
                    cout << 1 << " " << n-1 << "\n"; 
                }
                else
                {
                    cout << 2 << "\n";
                    cout << 1 << " " << n-1 << "\n";
                    cout << 1 << " " << n-1 << "\n";
                }
            }
            else
            {
                int x = a[0];
                for(i=1; i<n-1; i++)
                {
                    x = x^a[i];
                }
                if(x==0)
                {
                    cout << 3 << "\n";
                    cout << 1 << " " << n-1 << "\n";
                    cout << n-1 << " " << n << "\n";
                    cout << n-1 << " " << n << "\n";
                }
                else
                {
                    cout << 4 << "\n";
                    cout << 1 << " " << n-1 << "\n";
                    cout << 1 << " " << n-1 << "\n";
                    cout << n-1 << " " << n << "\n";
                    cout << n-1 << " " << n << "\n";
                }
            }
        }
        else
        {
            int b[n];
            for(i=0; i<n; i++)
                b[i]= a[i];
            sort(b, b+n);
            if(b[0]==b[n-1] && b[0] == 0 )
            {
                cout << 0 << "\n";
            }
            else
            {
                int x = a[0];
                for(i=1; i<n/2; i++)
                {
                    x = x^a[i];
                }
                int y = a[n/2 +1];
                for(i=n/2+1; i<n; i++)
                {
                    y = y^a[i];
                }
                if(x==0 && y==0)
                {
                    cout << 2 << "\n";
                    cout << 1 << " " << n/2 << "\n"; 
                    cout << n/2+1 << " " << n << "\n";
                }
                else if(x==0)
                {
                    cout << 3 << "\n";
                    cout << 1 << " " << n/2 << "\n"; 
                    cout << n/2+1 << " " << n << "\n";
                    cout << n/2+1 << " " << n << "\n";
                }
                else if(y==0)
                {
                    cout << 3 << "\n";
                    cout << 1 << " " << n/2 << "\n"; 
                    cout << 1 << " " << n/2 << "\n"; 
                    cout << n/2+1 << " " << n << "\n";
                }
                else
                {
                    cout << 4 << "\n";
                cout << 1 << " " << n/2 << "\n" << n/2 +2 << " " << n << "\n";
                cout << 1 << " " << n/2 << "\n" << n/2 +2 << " " << n << "\n";
                } 
            }
        }

        t--;
    }
}