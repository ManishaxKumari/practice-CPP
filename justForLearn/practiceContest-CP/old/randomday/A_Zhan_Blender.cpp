#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int b=min(x,y);
    int ans;
    if(n%b==0){
        ans=n/b;
    }
    else ans=n/b + 1;
    cout<<ans<<endl;
}



int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}