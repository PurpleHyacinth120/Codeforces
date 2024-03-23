#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int w, h, u1, d1, u2, d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    int i;
    for(i=h; i>0; i--)
    {
        w+=i;
        if(i==d1)
        {
            w-=u1;
            if(w<0)
                w=0;
        }
        if(i==d2)
        {
            w-=u2;
            if(w<0)
                w=0;
        }
    }
    cout << w << "\n";
}