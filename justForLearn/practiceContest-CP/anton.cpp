#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int cnta=0;
    int cntd=0;
    while(n--){
        if(s[i]=='A'){
            cnta++;
        }
        else{
            cntd++;
        }
        i++;
    }
    if(cnta>cntd){
        cout<<"Anton";
    }
    else if(cnta<cntd){
        cout<<"Danik";
    }
    else{
        cout<<"Frienship";
    }
    return 0;
}