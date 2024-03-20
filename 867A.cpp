#include<iostream>
#include<string>

using namespace std;

int main()
{
    int days;
    cin >> days;
    string office;
    cin >> office;
    int j=0, k=0, x=0;
    for(j=0; j<days-1; j++)
    {
        if(office[j]=='S'&&office[j+1]=='F')
            k++;
         if(office[j]=='F'&&office[j+1]=='S')
            x++;
    }
    if(k>x)
        cout << "YES";
    else 
        cout << "NO";

}