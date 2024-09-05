#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int min=INT_MAX;
        for(int i=0;i<10;i++){
            int sum=((i-a)+(b-i));
            if(sum<min){
                min=sum;
            }
        }
        cout<<min;


    }
}