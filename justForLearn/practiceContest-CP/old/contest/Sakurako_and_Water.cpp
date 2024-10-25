#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin>>n;
    int arr[n][n];
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(arr[i][j]<0){
                cnt=cnt+abs(j-i);
            }
            if(i=j && arr[i][j]<0){
                cnt=cnt+2;
            }
        }
    }

    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}