#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int give=0,gold=0;
    for(int i=0;i<n;i++){
        int people_money;
        cin>>people_money;
        if(!people_money && gold) gold--, give++;
        else if(people_money>=k) gold+=people_money;
    }
    cout<<give<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}


