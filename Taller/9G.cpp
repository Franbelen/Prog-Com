// stacks monotonos

#include <bits/stdc++.h>
using namespace std;


stack<int> s;
int n, a;


int main()
{
    cin >> n;
    int A[n], Ans[n];
    for(int i = 0; i < n ; i++ ){cin >> A[i];}

    for (int i = n - 1; i >= 0; i--)
    {
    //cerr << "bla" << endl;
        int a = A[i];
        while(!s.empty() and A[s.top()]>a)
        {
            Ans[s.top()] = i+1;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        Ans[s.top()] = 0;
        s.pop();
    }
    for(int j = 0; j <n-1;j++)
    {
        cout << Ans[j] << " " ;
    }
      
    cout << Ans[n-1]<< "\n";
    
}