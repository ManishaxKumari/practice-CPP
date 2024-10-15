// #include <bits/stdc++.h>
// using namespace std;


// void solve(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int cnt=0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]<=arr[i+1]){
//             cnt++;
//         }
//     }
//     if(cnt==n-1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         int max=arr[0];
//         for(int i=0;i<n;i++){
//            if(max<arr[i]){
//             max=arr[i];
//            }
//            for(int j=0;j<k;j++){
//             reverse(arr,arr+i);
//            }

//         }
//          int cnt2=0;
//             for(int i=0;i<n-1;i++){
//                 if(arr[i]<=arr[i+1]){
//                     cnt2++;
//                 }
//             }
//             if(cnt2==n-1){
//                 cout<<"YES"<<endl;
//              }
//              else{
//                 cout<<"NO"<<endl;
//              }

//     }




// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--) solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        if(is_sorted(arr,arr+n) || k > 1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}