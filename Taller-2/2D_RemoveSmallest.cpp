#include <bits/stdc++.h>
using namespace std;

int t,n,a,minimo,maximo;
int main(){   
cin >> t;
while(t--)
{
    set<int>  num;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        num.insert(a);
    }

    minimo = *num.begin();
    maximo = *num.rbegin();
    if(maximo - minimo  < num.size()) cout << "YES" << endl;
    else cout << "NO" << endl;

}
}