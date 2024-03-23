#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int seq[n];
    int fingerprints[m];
    int i;
    for(i=0; i<n; i++)
    {
        cin >> seq[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> fingerprints[i];
    }
    int j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(fingerprints[j]==seq[i])
            cout << seq[i] << " ";
        }
    }
}