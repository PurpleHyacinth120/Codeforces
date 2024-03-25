#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
bool isComposite(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return false;
   
    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return true;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;
   
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a=4, b;
    while(1)
    {
        b=a-n;
        //cout << a << "\n";
        if(isComposite(a) && isComposite(b))
        {
            cout << a << " " << a-n << "\n";
            break;
        }
        a++;
    }
}