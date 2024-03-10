#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of arrray";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute, if max number is 12 then make hash of 13 size and intially put 0 on it 
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"enter number of query";
    cin>>q;
    int number;
    while(q--){   //q-- meaning q!=0; runs the loop until t is 0 during checking it's value, since 0 is equally to false in a logical context
        cin>>number;
        //fetch
        cout<< hash[number]<<endl;
    }
    return 0;
}