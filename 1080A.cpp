#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int notebooks=0;
    if((2*n)%k==0)
        notebooks+=(2*n)/k;
    else
        notebooks+=(2*n)/k+1;
    if((5*n)%k==0)
        notebooks+=(5*n)/k;
    else
        notebooks+=(5*n)/k+1;
    if((8*n)%k==0)
        notebooks+=(8*n)/k;
    else
        notebooks+=(8*n)/k+1;
    cout << notebooks;
}