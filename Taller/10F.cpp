#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;

int main()
{
    cin >> n;

    int A[n+2];
    A[1]=0;
    for (int i = 2; i < n+1; i++)
    {
        cout <<"?  1 "<< i << endl;
        cin >>A[i];
    }
    cout <<"?  2  3" << endl;
    cin >> c;
    a = (A[2]+A[3]-c)/2;
    cout << "! " << a;
    for(int j = 2; j<n+1;j++){cout << " " << A[j]-a;}
    cout << endl;
}