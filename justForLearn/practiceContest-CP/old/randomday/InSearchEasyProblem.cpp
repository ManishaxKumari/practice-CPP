#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
    }
    if(cnt>0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

    return 0;
}