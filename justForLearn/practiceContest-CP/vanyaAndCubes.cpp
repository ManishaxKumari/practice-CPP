#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int height=0;
    int sum=0;
    for(int i=1;n>0;i++){
        sum=sum+i;
        if(n-sum>=0) height++;
        n=n-sum;
    }
    cout<<height;
    return 0;
}
     