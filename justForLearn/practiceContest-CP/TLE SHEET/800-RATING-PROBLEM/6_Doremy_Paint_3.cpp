#include <bits/stdc++.h>
using namespace std;


// string solve(){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//           sum+=arr[i];
//         }
//         int p1=arr[0];
//         int p2;
//         int p3;
//         for(int i=1;i<n;i++){
//             if(p1 !=arr[i]){
//                 p2=arr[i];
//                 break;
//             }
            
//            }
//         for(int i=0;i<n;i++){
//             if(p3!=p1 || p3!=p2){
//                 return "NO";
//             }
//         }
        


//         if(sum==arr[0]*n){
//             return "YES";
//         }
//         if(n%2==0){
//             if(sum==p1*(n/2)+p2*(n/2)){
//                 return "YES";
//             }
//         }
//         else{
//             if(sum==p1*(n/2 + 1)+p2*(n/2)  || sum==p1*(n/2)+p2*(n/2  + 1)){
//                 return "YES";
//             }
//         }
//         return "NO";
// }


string solve(){
    int n;
    cin>>n;
    int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
       string sol= solve();
       cout<<sol<<endl;
    }
    
    return 0;
}