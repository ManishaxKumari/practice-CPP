#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int md=INT_MAX;
    for(int i=0;i<n;i++){
        int nmd=abs(num[i]-num[i+1]);
        md=min(md,nmd);
    }
    if(md==1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;

}