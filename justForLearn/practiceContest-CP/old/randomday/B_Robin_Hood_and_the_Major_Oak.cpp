#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// void solve(){
//     int n,k;
//     cin>>n>>k; 
//     int sum=0;
//     while(k--){
//         sum+=pow(n,n);
//         n--;
//     }
//     if(sum%2==0) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }

void solve(){
    ll n,k;
    cin>>n>>k;
    ll s=(n-k+1);
    ll e=n;
    ll len=e-s+1;
    
    if(s%2==0){
        if(len==1 || (len +2)%2==0) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(len>1 && ((len+1)/2)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

