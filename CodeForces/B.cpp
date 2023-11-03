#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

int t, n, a;
queue<ii> q;
int dif(ii a, ii b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main(){
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        multiset<int> num;
        vector<int> numeros;
        
        for(int i = 0; i < 2*n; i++)
        {
            cin >> a;
            num.insert(a);
        }

    for(auto i : num)
    {
        numeros.push_back(i);
    
    }

    int c = 0;
    ii anterior = ii(numeros[0], numeros[n]);
    q.push(anterior);
    for(int i = 1; i < n; i++)
    {
        ii actual = ii(numeros[i], numeros[n+i]);
        c += dif(actual, anterior);
        q.push(actual);
        anterior = actual;
    }
    cout << c << endl;
    while(!q.empty())
    {
        ii actual = q.front();
        q.pop();
        cout << actual.first << " " << actual.second << endl;
    }
    }
}