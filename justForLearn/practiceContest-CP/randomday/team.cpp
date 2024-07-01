#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>0){
        int p,v,t;
        cin>>p>>v>>t;
        
        if(p == 1  && v == 1 && t==1){
            cnt++;
        }
        if(p == 1 && v == 1 && t==0){
            cnt++;
        }
        if(p == 1 && v == 0 && t==1){
            cnt++;
        }
        if(p == 0 && v == 1 && t==1){
            cnt++;
        }
        n--;
    }
    cout<<cnt;
}


