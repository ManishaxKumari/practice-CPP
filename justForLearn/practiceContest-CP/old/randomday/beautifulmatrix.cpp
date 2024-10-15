#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    int n=0;
    int m;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]==1){
            int m=i;
            break;
        }
        n++;
    }
    cout<<m,n;
    


    


}