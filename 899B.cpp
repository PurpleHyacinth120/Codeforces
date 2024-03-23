#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string real="";
    int i;
    int x;
    string s1, s2, s3, s4, s5, s6;
    s1 ="312831303130313130313031";//n
    s2 = "312931303130313130313031";//l
    s3 = s1+s1+s2;//nnl
    s4 = s1+s2+s1;//nln
    s2 += s1+s1;//lnn
    s1 += s1+s1;//nnn

    for(i=0; i<n; i++)
    {
        cin >> x;
        real+=to_string(x);
    }
    if(s1.find(real)!=string::npos||s2.find(real)!=string::npos||s3.find(real)!=string::npos||s4.find(real)!=string::npos)
        cout << "Yes\n";
    else
        cout << "No\n";
}
// 312831303130313130313031
// 312931303130313130313031
//lnn
//nln
//nnn
//nnl