#include<bits/stdc++.h>
using namespace std;

int A,B,n,k;
int main(){

cin >> n >> k;

int l = 1;
int r = n;
int arr[n],c = 0,inicial = 2;
memset(arr,0,sizeof(arr));
//binary search
k+= inicial;
while (l < r)
{
    c++;
    int mid = (l+r)/2;
    cout << "? 1 " << mid << endl;
    fflush;
    cin >> B;
    B = mid - B;
    arr[mid-1] = B;
    if (B > k)
    {
        r = mid;
    } else {
        l = mid+1;
    }

}
if (c == inicial){
cout << "! " << l << endl;
} elif c < inicial {
    while(c < inicial)
    {
    c++;
    
    }
    

    cout << "! " << l-1 << endl;
}
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
}