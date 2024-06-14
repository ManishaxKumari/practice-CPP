#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max=0;
    int capacity = 0;
    while(n--){
      int a;
      int b;
      cin>>a>>b;
        capacity= capacity-a+b;
      if(capacity >max ) {
        max=capacity;
      }
    }
    cout<<max;
}