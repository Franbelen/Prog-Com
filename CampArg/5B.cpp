#include <bits/stdc++.h>
using namespace std;

int n,a,b, c;
map<int,int> num;

vector<int> v;
bool continuos = false;
int main()
{
    cin >> n >> a;
    c = 0;
    v.push_back(a);
    for(int i = 1; i < n; i++)
    {
        cin >> b;
        if (b != a)
        {
        num[a]++;
        c++;
        if (i> 2 and v[i-2] == a) continuos = true;
        }
        a = b;
        v.push_back(a);

       //cout << a << " " << b << " " << c << endl;
    }
    num[a]++; c++;
// encontrar maximo en map num

    int maxi = 0;
    for(auto i : num)
    {
        maxi = max(maxi,i.second);
    }

    cout << c - maxi-continuos<< endl;
}