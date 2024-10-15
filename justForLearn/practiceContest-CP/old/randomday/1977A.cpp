#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        n=n-m;
        if(n==0){
            cout<<"Yes";
        }
        else if(n<0){
            cout<<"No";
        }

        else if(n%2 == 0){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }

    }
    return 0;
}