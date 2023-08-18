#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int t,c, a,r;
long long n,k;
set<int> S;
int main()
{
    
    cin >> t;
    while(t--)
    {   
        //cout << "times: " << t << "\n";
        S.clear();
        c = 0;
        cin >> n >> k;

        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if (a < n) c++;
            S.insert(a);
        }
        
        if (c == n and S.size() == n)
        {
            cout << n+k << "\n";  

        }else 
        {   if (k>0)
            {
            
                for(int f = 0; f < n; f++)
                {
                    if (!S.count(f))
                        {
                            int m = *S.rbegin();
                            //cout << "max y mex " << m << " "<< f << "\n";
                            if (f%2 == m%2)
                            {
                                r = (f+m)/2;
                            }
                            else
                            {
                                r = (f+m)/2 + 1;
                            }
                            S.insert(r);
                            break;
                        }
                    //cout << "r: " << r << "\n";
                }
            }
            cout << S.size() << "\n";
        }

    }
}
