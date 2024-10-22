#include <bits/stdc++.h>
using namespace std;


string solve(){
    int n;
    cin>>n;

    //case 01
    if(n+1 % 3 ==0 || n-1 % 3== 0) return "First";
    //case02
    int i=0;
    n=n+1;
    while(i<9){
        if(n%3==0) return "First";
        n=n+2;
    }
    n=n-1;
    while(i<9){
        if(n%3==0)  return "First";
        n=n-2;
        if(n<0) return "Second";
    }
    return "second";
   

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s=solve();
        cout<<s<<endl;
    }
}