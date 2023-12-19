#include<bits/stdc++.h>
using namespace std;

int A,B,n,t,k;
int main(){

cin >> n >> t >> k;

int l = 0;
int r = n;

//binary search
int mid = 0;
while (l < r)
{
   
    mid = (l+r)/2;
    cout << "? 1 " << mid << endl;
    fflush;
    cin >> B;
    B = mid - B; //number of zeros
    cout << B << " " << l << " " << r << endl;
    
    if (B > k)
    {
        r = mid;
    } else {
        l = mid+1;
    }

}

cout << "! " << l-1 << endl;


}