#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
   return -1*sum;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum =solve();
        cout<<sum<<endl;
    }
    return 0;
}