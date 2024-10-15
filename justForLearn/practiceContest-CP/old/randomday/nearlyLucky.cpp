#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>0){
        if(n%10 ==4 || n%10 ==7){
           cnt++;
        }
        n=n/10;

    }
    if(cnt==7 || cnt==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}