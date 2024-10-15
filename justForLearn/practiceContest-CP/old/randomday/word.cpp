#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cntc=0;
    int cnts=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            cntc++;
        }
        else{
            cnts++;
        }
    }
    if(cntc<=cnts){
        for(int i=0;i<s.size();i++){
          if(s[i]<97){
            s[i]=s[i]+32;
          }
    }
    }
    else{
         for(int i=0;i<s.size();i++){
            if(s[i]>=97){
            s[i]=s[i]-32;
          }
    }
    }
    cout<<s;


    return 0;
}
