#include <bits/stdc++.h>
using namespace std;



vector<int> solve(){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int l=0;
    for(int i=0;i<2*n;i++){
        if(arr[i]==1){
            l=l+1;
        } 
    }
    vector<int> ans(2);
    if(l==n) {
        ans[0]=1;
        ans[1]=n;
    }
    if(l<n){
        ans[0]=0;
        ans[1]=l;
    }
    if(l>n){
        ans[0]=0;
        ans[1]=((2*n)- l);

    }
    return ans;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> sol=solve();
        for(int i=0;i<2;i++){
            cout<<sol[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
