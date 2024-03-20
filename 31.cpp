#include<iostream>

using namespace std;
int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else 
        return x*factorial(x-1);
}

int main()
{
    int n;
    cout << "Enter the number for factorial: ";
    cin >> n;
    cout <<"The factorial of the entered number is : "<<  factorial(n) << endl;
}