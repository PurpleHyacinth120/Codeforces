#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int j=0, l;
    for(l=1;l<=n/2;l++)
    {
        if((n-l)%l==0)
            j++;
    }
    cout << j;
}