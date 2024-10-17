#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
            return 2;
        }
        else if(s[i]=='.'){
            cnt++;
        }
    }
    return cnt;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt=solve();
        cout<<cnt<<endl;
    }
}