#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector <int> v(3);
    int a, b, c;
    cin >> a >> b >> c;
    int d; 
    cin >> d;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    int min, max, mid;
    max = v[5];
    min = v[3];
    mid = v[4];
    int k =0;
    while(max-mid<d)
    {
        max++;
        k++;
    }
    while(mid-min<d)
    {
        min--;
        k++;
    }
    cout << k << "\n";
}