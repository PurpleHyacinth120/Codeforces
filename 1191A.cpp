#include<iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int i = x%4;
    switch(i)
    {
        case 0:
            cout << 1 << " A";
            break;
        case 1:
            cout << 0 << " A";
            break;
        case 2:
            cout << 1 << " B";
            break;
        case 3: 
            cout << 2 << " A";
            break;
    }
}