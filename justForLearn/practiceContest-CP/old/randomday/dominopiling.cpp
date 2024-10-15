#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt=(cnt + m/2);

    }
    if(m%2 != 0){
        cnt=(cnt+n/2);
    }
    cout<<cnt;

    return 0;
}