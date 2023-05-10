#include <bits/stdc++.h>
using namespace std;

int T,L,b;
vector<int>  N;

int t;
int main()
{
    cin >> T;

    while (T--)
    {
        cin >> L;
        t = 0;
        N.clear();
        cin >> b;
        if (b == 1){t = 0;}
        else {t = -1;}

        if (L == 1){N.push_back(-t);}
        for (int i = 1; i < L; i++)
        {
            cin >> b;

            if(b == 1)
            {
                N.push_back(i-t-1);
                t = i;
            }
            if (i == L-1){ N.push_back(i-t);}
        }
        cout << *max_element(N.begin(),N.end());
        cout << "\n";
    
    }
    
}