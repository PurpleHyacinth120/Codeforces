#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    const int prin = 10000;
    int i =1;
    for(i=1;i<=20;i++)
    {
        cout << "At the end of " << i << " day, the amount is: " << 10000*(pow(1.01,i)) << endl;
    }
}