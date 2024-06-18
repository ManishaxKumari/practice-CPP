#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int i=1;
    int borrow;
    while(w--){
        n=n-(i*k);
        i++;
    }
    if(n<0){
        borrow=abs(n);
    }
    else{
        borrow=0;
    }
   
    cout<<borrow;


    return 0;
}