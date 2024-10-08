#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int bps,zps;
        cin>>bps>>zps;
        long long sec=0;
        long long eff=min(bps,zps);
        while(n>0){
            n=n-eff;
            sec++;
        }
        cout<<sec<<endl;

    }
}