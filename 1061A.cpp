#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;
    int i;
    int sum=0;
    for(i=n; i>=1; i--)
    {   if (S/i>=1 && S%i==0)
        {
            cout << S/i << "\n";
            break;
        } 
        else if(S/i !=0 )
        {
            cout << S/i +1 << "\n";
            break;
        }
    }
}