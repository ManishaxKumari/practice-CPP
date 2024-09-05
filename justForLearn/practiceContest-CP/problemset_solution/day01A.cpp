//https://codeforces.com/contest/139/problem/A
//petr and book

#include <bits/stdc++.h>
using namespace std;


int calc(int n,int arr[]){
    int np=n;
    int cnt=0;
        for(int i=0;i<7;i++){
        np=np-arr[i];
        cnt++;
        if(np<=0){
            if(cnt<=7){
                cout<<cnt;
            }
            if(cnt>7){
                cout<<abs(7-cnt);
            }
            
            break;
        }
    }
    if(np>0){
    calc(np,arr);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    calc(n,arr);
}




