#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
  cin>>tc;
  while(tc--){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;  i<2*n; i++){
      cin>>arr[i];
    }
     int ones=0;
    int zeros=0;
    for(int i=0;  i<2*n; i++){
      if(arr[i]==0) zeros++;
      else ones++;
    }
    int mini=0, maxi=0;
    if(zeros%2==0){
      mini=0;
      maxi=min(ones, zeros);
    } 
    if(zeros%2!=0){
      mini=1;
      maxi=min(ones, zeros);
    }
    cout<<mini<<" "<<maxi<<endl;
  }
}