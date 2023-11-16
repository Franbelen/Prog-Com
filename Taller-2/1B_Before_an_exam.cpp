#include<bits/stdc++.h>
using namespace std;
int m,M,a,b,t,d;

int main(){

cin >> d >> t;
int min[d],max[d],dif[d];
for (int i = 0; i < d; i++)
{
    cin >> a >> b;
    m += a;
    M += b;
    min[i] = a;
    max[i] = b;
    dif[i] = b-a;
}

if (t < m or t > M)
{
    cout << "NO" << endl;
    return 0;
} else {
    cout << "YES" << endl;
    int i = 0;
    while(i < d)
    {

    if(m == t){ 
        cout << min[i] << " ";
    }else if (m + dif[i]< t){
        cout << min[i] + dif[i] << " ";
        m+= dif[i];
    } else {
        cout << min[i] + t - m << " ";
        m = t;
    }
    
    i++;
    }
    cout << endl;
}
}