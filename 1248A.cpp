#include<bits/stdc++.h>

using namespace std;
 
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t>0)
    {
        int n, m, po, pe, qe, qo;
        po = pe = qo = qe = 0;
        cin >> n;
        int a[n];
        int i;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]%2)
                po++;
            else
                pe++;
        }
        cin >> m;
        int b[m];
        for(i=0; i<m; i++)
        {
            cin >> b[i];
            if(b[i]%2)
                qo++;
            else
                qe++;
        }
        /*int pet = (pe*(pe+1)*(2*pe+1))/6-1;
        int qet = (qe*(qe+1)*(2*qe+1))/6-1;
        int pot = (po*(po+1)*(2*po+1))/6-1;
        int qot = (qo*(qo+1)*(2*qo+1))/6-1;*/
        int ev;
        int x;
        if(pe==0 || qe==0)
            ev = 0;
        else
        {
            if(pe>qe)
            {
                //ev = fact(pe)/fact(pe-qe);
                ev = nCr(pe,qe);
                //ev *= (qe-1)*(qe-2)/2;
                for(i=qe; i>0; i--)
                    ev *= nCr(i,1)*i;
            }
            else 
            {
                //ev = fact(qe)/fact(qe-pe);
                ev = nCr(qe, pe);
                //ev *= (pe-1)*(pe-2)/2;
                for(i=pe; i>0; i--)
                    ev *= nCr(i,1)*i;
                //ev = x*fact(pe-1);
            }
        }
        int od;
        if(po==0 || qo==0)
            od = 0;
        else
        {
            if(po>qo)
            {
                //od = fact(po)/fact(po-qo);
                od = nCr(po, qo);
                //od *= (qo-1)*(qo-2)/2;
                for(i=qo; i>0; i--)
                    od *= nCr(i,1)*i;
                //od = x*fact(qo-1);   
            }
            else 
            {
                //od = fact(qo)/fact(qo-po);
                od = nCr(qo, po);
                //od *= (po-1)*(po-2)/2;
                for(i=po; i>0; i++)
                    od *= nCr(i,1)* i;
                //od = x*fact(po-1);
            }
        }
        cout << ev + od << "\n";
        t--;
    }
}