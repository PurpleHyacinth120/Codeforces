#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, a, b, c, d;
    int ThomasPosition = 1;
    int ThomasSum = 0;
    int sum = 0;
    cin >> a >> b >> c >> d;
    ThomasSum = a+b+c+d;
    for(i=2; i<=n;i++)
    {
        cin >> a >> b >> c >> d;
        sum = a+b+c+d;
        if(sum>ThomasSum)
            ThomasPosition++;
    }
    cout << ThomasPosition;
    return 0;    
}