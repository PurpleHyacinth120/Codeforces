#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i;
    cin >> i;
    string seq;
    cin >>seq;
    int j = 0, k = 0, x =0;
    for(j=0; j<i; j++)
    {
        if(seq[j]=='n')
             cout << 1 << " ";
    }
    for(j=0; j<i; j++)
    {
         if(seq[j]=='z')
            cout << 0 << " ";
    }
    cout << "\n";
}