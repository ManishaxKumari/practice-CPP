#include <bits/stdc++.h>
using namespace std;

int main(){
    string ct;
    cin>>ct;
    int flag=0;
    for(int i=0;i<5;i++){
        string ch;
        cin>>ch;
        if(ch[0]==ct[0] || ch[1]==ct[1]){
            flag++;
        }
    }
    if(flag==0) cout<<"NO";
    else{
        cout<<"YES";
    }



    return 0;
}