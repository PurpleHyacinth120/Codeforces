#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        int n, i, max, min, count=0;
        cin >> n;
        int a[n];
        cin >> a[0];
        max = a[0];
        min = a[0];
        for(i=1; i<n; i++)
        {
            cin >> a[i];
            if(max < a[i])
                max = a[i];
            if(min > a[i])
                min = a[i];
        }
        if(max==min)
            cout << -1 << endl;
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]==max)
                    count ++;
            }
            cout << n-count << " " << count << endl;
            for(i=0; i<n; i++)
                if(a[i]!=max)
                    cout << a[i] << " ";
            cout << endl;
            for(i=0; i<count; i++)
                cout << max << " "; 
            cout << endl;
        }
        t--;  
    }
}

