#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            sum=sum+(pow(-1,i)*arr[i-1]);
        }
        cout<<-sum<<endl;

    }
    return 0;
}