#include <bits/stdc++.h>
using namespace std;

int main(){
    //number of variable
    int n;
    cin>>n;
    string s;
    int X=0;
    while(n>0){
        cin>>s;
        if( s=="X++" || s=="++X"){
            X++;
        }
        else{
            X--;
        }
       
        n--;
    }
   cout<<X; 

}