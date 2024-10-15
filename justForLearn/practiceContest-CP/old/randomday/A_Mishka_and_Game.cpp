#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str.size();
    int flag=0;
    for(int i=0;i<n;i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            flag++;
        }
        
    }
    if(flag==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}