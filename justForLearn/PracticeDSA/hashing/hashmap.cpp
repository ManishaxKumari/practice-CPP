#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    map<int,int>mpp; //in case of character store "map<char,int>mpp;"
    for(int i=0;i<n;i++){
        mpp[arr[i]]++; // mpp[s[i]]++(not store integer value )but its map using string value like a-->2;
    }
    //iterate in the map
    for(auto it: mpp){
        cout<< it.first<<"-->"<<it.second<<endl;
    }

    int q;
    cout<<"how many number you want to check";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl;
    }
    return 0;
}