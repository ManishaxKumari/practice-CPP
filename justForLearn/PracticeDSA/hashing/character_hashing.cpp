#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter your desired string"<<endl;
    cin>>s;

    //precompute
    // if we don't know that charter isl̥ower case or upper case then 
    //int hash[256]={0};
    int hash[26]={0};  
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++ ; //s[i]-'a' is index
        //hash[s[i]]++;
    }

    int q; 
    cout<<"enter number of char you want to check";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<< hash[c-'a']<<endl;
        //cout<<hash[c]<<endl;
    }
    return 0;
}
