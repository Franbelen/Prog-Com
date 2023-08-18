#include <bits/stdc++.h>
using namespace std;

int n,a;
set<int> num;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a <= n) num.insert(a);

    }

    cout << n- num.size() << endl;
}