#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    //size_t slen = strlen(str);
    size_t it1= str.find("BAC");
    bool fir= false;
    if(it1!=string::npos)
        fir = true;

    size_t it2= str.find("BCA");
    bool sec= false;
    if(it2!=string::npos)
        sec = true;

    size_t it3= str.find("ABC");
    bool thir= false;
    if(it3!=string::npos)
        thir = true;

    size_t it4= str.find("ACB");
    bool fou= false;
    if(it4!=string::npos)
        fou = true;

    size_t it5= str.find("CAB");
    bool fiv= false;
    if(it5!=string::npos)
        fiv = true;

    size_t it6= str.find("CBA");
    bool six= false;
    if(it6!=string::npos)
        six = true;

    if(fir||sec||thir||fou||fiv||six)
        yes
    else
        no
}