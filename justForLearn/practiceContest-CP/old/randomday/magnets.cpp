#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num1;
    int prev;
    int group=0;
    for(int i=0;i<n;i++){
        prev=num1;
        cin>>num1;
        if(num1!=prev){
            group++;
        }
    }
    cout<<group;
}