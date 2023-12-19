#include <bits/stdc++.h>
using namespace std;
int n,m,k,t;
int main(){
    cin >> t;
    
    while (t--)
    {
        cin >> n >> m >> k;
        if (k < n + m - 2 or k%2 != (n +m-2)%2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++){
                for(int j = 1; j < m-1; j++){
                    cout << "R ";
                }
                cout << "R" << endl;
            }
            for (int i = 0; i < n-1; i++){
                for(int j = 0; j < m-1; j++){
                    cout << "B ";
                }
                cout << "B" << endl;
            }
        }
    }
}