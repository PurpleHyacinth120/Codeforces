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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int s[26];
    int s1[26];
    int i, j;
    char x;
    for(i=0; i<26; i++)
    {
        cin >> x;
        s[i] = int(x);
    }
    cin.ignore();
    for(i=0; i<26; i++)
    {
        cin >> x;
        s1[i] = int(x);
    }
    string s3;
    cin >> s3;
    //capital 65 to 90, small 97 to 122
    int n = s3.size();
    int s4[n];
    for(i=0; i<n; i++)
    {
        s4[i] = int(s3[i]);
        cout << s4[i] << "*\n";
    }
    //s4 is int converted
    int sn[n];
    for(i=0; i<n; i++)
    {
        if((s4[i]>=97) && (s4[i]<=122))
            {
                int c = s4[i]-97;
                for(j = 0; j<26; j++)
                {
                    if(c==s[j])
                    {
                        sn[i]=s1[j]+97;
                        cout << sn[i] << "!!!\n";
                        break;
                    }
                }
            }
            else if((s4[i]>=65) && (s4[i]<=90))
            {
                int c = s4[i]-65;
                for(j = 0; j<26; j++)
                {
                    if(c==s[j])
                    {
                        sn[i]=s1[j] + 65;
                        cout << sn[i] << "!!!\n";
                        break;
                    }
                }
            }
            else 
            {
                sn[i] = int(s3[i]);
                cout << sn[i] << "!!!\n";
            }
    }
    for(i=0; i<n; i++)
    {
        cout << sn[i] << "%%%%\n";
        // char o = char(sn[i]);
        // cout << o;
    }
}