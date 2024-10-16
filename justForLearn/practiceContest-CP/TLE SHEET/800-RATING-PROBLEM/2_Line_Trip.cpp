#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    int maxl=arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(int i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        maxl=max(maxl,diff);
    }

    int max_d= max((x-arr[n-1])*2,arr[0]);
    int max_D=max(max_d,maxl);
    cout<<max_D<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}