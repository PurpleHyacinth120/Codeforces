#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int l, r, i=0, j=0;
    char c1, c2;
    string urString;
    cin.ignore();
    getline(cin, urString);
    for(i= 1; i<=m; i++)
    {
        cin >> l >> r >> c1 >> c2;
        for(j=l-1; j<=r-1;j++)
            if(urString[j]==c1)
                urString[j]=c2;
    }
    cout << urString;


}