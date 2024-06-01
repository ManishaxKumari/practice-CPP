#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int cnt=0;
    while(x!=0){
        if(x>=5){
            x=x-5;
            cnt++;
        }
        else if(x>=4){
            x=x-4;
            cnt++;
        }
        else if(x>=3){
            x=x-3;
            cnt++;
        }
        else if(x>=2){
            x=x-2;
            cnt++;

        }
        else {
            x=x-1;
            cnt++;
        }
    } 
    cout<<cnt;
    return 0;
}
 