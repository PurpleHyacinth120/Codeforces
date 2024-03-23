#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> x;
    int b = x;
    while(b>=1)
    {
        int a = 1;
        while(a<b*x)
        {
            if(a%b==0 && a*b>x)
                break;
            a++;               
        }
        if(b==1 && a==x)
            cout << -1 << "\n";
            
        else if(a%b==0 && a*b>x )
        {
             cout << a << " " << b << "\n";
             break;
        }
        b--;
    }    
}