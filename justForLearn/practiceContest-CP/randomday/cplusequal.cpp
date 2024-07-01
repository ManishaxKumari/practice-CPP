#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int cnt;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int cnt=0;
        while(n>=0){
            if(a>=b){
                a=a+b;
                cnt++;
            }
            else if(a<b){
                b=b+a;
                cnt++;
            }
        }
    }
    cout<<cnt;


    return 0;
}
