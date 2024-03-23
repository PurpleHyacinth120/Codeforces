#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << 6-n << endl;
    int i;
    string arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    for(i=0;i<n;i++)
    {
        if(arr[i]=="red")
            break;
    }
    if(i==n)
        cout << "Reality" << endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]=="yellow")
            break;
    }
    if(i==n)
        cout << "Mind" << endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]=="purple")
            break;
    }
    if(i==n)
        cout << "Power" << endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]=="green")
            break;
    }
    if(i==n)
        cout << "Time" << endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]=="blue")
            break;
    }
    if(i==n)
        cout << "Space" << endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]=="orange")
            break;
    }
    if(i==n)
        cout << "Soul" << endl;
    return 0;    
}