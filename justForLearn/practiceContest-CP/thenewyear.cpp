#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    //meet up point arr[1]
    int t1=abs(arr[0]-arr[1]);
    int t2=abs(arr[1]-arr[2]);
    int td=t1+t2;
    cout<<td;
    return 0;
}