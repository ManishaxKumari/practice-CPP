#include <bits/stdc++.h>
using namespace std;

int main(){
   string num1;
   string num2;
   cin>>num1>>num2;
   int n=num1.size();
    for(int i=0;i<n;i++){
        if(num1[i]==num2[i]){
            cout<<'0';
        }
        else{
            cout<<'1';
        }
    }


}