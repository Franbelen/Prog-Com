#include<bits/stdc++.h>
using namespace std;

int A,B,C,n;
int main(){

cin >> n;
int arr[n];
cout << "? 1 2" << endl;
fflush;
cin >> A;

cout << "? 2 3" << endl;
fflush;
cin >> B;

cout << "? 1 3" << endl;
fflush;
cin >> C;

arr[0] = (A+C-B)/2;
arr[1] = A - arr[0];
arr[2] = C- arr[0];


for (int i = 4; i <= n; i++)
{
    cout << "? 1 " << i << endl;
    fflush;
    cin >> A;
    arr[i-1] = A-arr[0];
}
cout << "! ";
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
cout << endl;
}
