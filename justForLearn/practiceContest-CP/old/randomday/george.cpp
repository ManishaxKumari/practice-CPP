#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[2];
    int cnt=0;
    while(n--){
        
        for(int i=0;i<2;i++){
        cin>>arr[i];
        if(arr[i]==arr[i+1]){
            cnt++;
        }
        }

    }
    cout<<cnt;
    }
    
    //wrong