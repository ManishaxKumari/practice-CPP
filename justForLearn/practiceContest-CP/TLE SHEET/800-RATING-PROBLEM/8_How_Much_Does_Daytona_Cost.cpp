#include <bits/stdc++.h>
using namespace std;



string solve(){
    int n,k;
    cin>>n>>k; 
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return "YES";
        }
    }
    return "NO";

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s=solve();
        cout<< s<<endl;

    }
}