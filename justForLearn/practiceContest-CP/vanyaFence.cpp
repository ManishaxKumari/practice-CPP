#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h,x;
    cin>>n>>h;
    int cnt=0;
    while(n--){
        cin>>x;
        if(x<=h){
            cnt++;
        }
        else if(x>h){
            cnt=cnt+2;
        }
    }
    cout<<cnt;
    return 0;
}