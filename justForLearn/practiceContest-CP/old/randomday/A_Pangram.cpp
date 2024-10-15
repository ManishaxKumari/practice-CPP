#include <bits/stdc++.h>
using namespace std;


int main(){
    int k,r;
    cin>>k>>r;
    int buy;
    int i=1;
    while(true){
        buy=k*i;
        if(buy%10==r || buy%10==0){
            cout<<i;
            break;
        }
        i++;
    }
}