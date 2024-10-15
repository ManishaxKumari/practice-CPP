#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            cnt++;
        }
    }
    cout<<cnt;
}